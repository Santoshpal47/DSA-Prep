#include <bits/stdc++.h>
using namespace std;

#define mod 101
#define base 26

bool check(string &text, int idx, string &pattern)
{
    for (int i = 0; i < pattern.size(); i++)
    {
        if (text[idx + i] != pattern[i])
        {
            return false;
        }
    }
    return true;
}

int search(string &text, string &pattern)
{
    int n = text.length();
    int m = pattern.length();

    if (m > n)
        return -1; // Edge case: Pattern is longer than text

    int p = 0; // Hash value of pattern
    int t = 0; // Hash value of substring of length m
    int h = 1; // Hash value of leftmost char

    // Calculate h = base^(m-1) % mod
    for (int i = 0; i < m - 1; i++)
    {
        h = (h * base) % mod;
    }

    // Compute hash values for pattern and first window of text
    for (int i = 0; i < m; i++)
    {
        p = ((p * base) + pattern[i]) % mod;
        t = ((t * base) + text[i]) % mod;
    }

    // Sliding window approach
    int i = 0, j = m - 1;

    while (j < n)
    {
        // If hash values match, check character by character
        if (p == t && check(text, i, pattern))
        {
            return i;
        }

        // Compute next window hash value
        if (j + 1 < n)
        {
            t = ((t - (text[i] * h) % mod + mod) * base + text[j + 1]) % mod;
        }

        i++;
        j++;
    }

    return -1; // Pattern not found
}

int main()
{
    string text = "abcde";
    string pattern = "bc";

    int idx = search(text, pattern);

    if (idx != -1)
        cout << "Pattern found at index: " << idx << endl;
    else
        cout << "Pattern not found" << endl;

    return 0;
}
