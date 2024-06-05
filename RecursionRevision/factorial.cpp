#include <iostream>
using namespace std;

int factorial(int n) {

    // base case
    if (n == 0)
    {
        return 1;
    }
    // recusive relation
    int ans = n * factorial(n - 1);
    return ans;
}

int main(){
    int n;
    cout << "Enter the digit who's factorial you wants to know :" << endl;
    cin >> n;
    cout << "Factorial of " << n << ":" << endl;
    // implementing factorial
    int ans = factorial(n);
    cout << ans;

    return 0;
}