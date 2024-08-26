#include <iostream>
using namespace std;
int main(void)
{

    int occurence = 0;
    cout << endl;
    cout << endl;
    cout << endl;

    string s = "AAGAGGCAATAGGACTTTCACCCAAAGGTGTGGGGGACTTTCTTCTTTAGCGAGCGCGTGATTGGGTTCCGATTTCTTCTTAATGAAGCACTAATGCATATACTCTGAGAGCCGATA";
    int n = s.length();

    cout << "given string is :" << s << endl;
    cout << "length of string :" << n << endl;
    for (int i = 0; i < n - 4; i++)
    {
        if (s[i] == 'T' && s[i + 1] == 'T' && s[i + 2] == 'C' && s[i + 3] == 'T' && s[i + 4] == 'T')
        {
            occurence++;
        }
    }
    cout << "occurence of TTCTT :" << occurence << endl;
    cout << "Time complexity is: O(n)" << endl;
    cout << "Space complexity is: O(1)" << endl;
    cout << endl;
    cout << endl;
    cout << endl;
}