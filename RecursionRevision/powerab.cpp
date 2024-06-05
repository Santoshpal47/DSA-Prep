#include <iostream>
using namespace std;
int power(int a, int b)
{

    // base case
    if (b < 0)
    {
        return a;
    }
    if (b == 0)
    {
        return 1;
    }

    // recursive
    if (b % 2 == 0)
    {
        return power(a * a, b / 2);
    }
    else
    {
        return a * power(a * a, b / 2);
    }
}
int main()
{

    int a = 3;
    int b =11;
    int ans = power(a, b);
    cout << ans;

    return 0;
}