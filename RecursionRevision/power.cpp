#include <iostream>
using namespace std;

int pow(int n)
{

    // base case
    if (n == 0)
    {
        return 1;
    }

    // recursive relation
    int ans = 2 * pow(n - 1);
    return ans;
}

int main()
{

    int n;
    cout << "Enter the digit :" << endl;
    cin >> n;
    cout << "Power of " << n << ":" << endl;

    int ans = pow(n);
    cout << ans;

    return 0;
}