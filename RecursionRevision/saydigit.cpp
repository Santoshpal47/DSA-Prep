#include <iostream>
using namespace std;

void saydigit(int digit, string arr[])
{

    // base case
    if (digit == 0)
    {
        return;
    }

    int n = digit % 10; 
    digit = digit / 10;

    saydigit(digit, arr);

    cout << arr[n] << " ";
}

int main()
{

    int a;
    string arr[10] = {
        "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    cout << "Enter the digit :" << endl;
    cin >> a;

    cout << "Your answer :" << endl;
      if (a == 0) {
        cout << arr[0] << " ";
    } else {
        saydigit(a, arr);
    }

    return 0;
}