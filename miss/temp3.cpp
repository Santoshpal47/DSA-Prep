#include <iostream>
#include <string>

using namespace std;

string intToBinary(int num)
{
    string binary = "";
    while (num > 0)
    {
        binary = (num % 2 == 0 ? "0" : "1") + binary;
        cout << binary << endl;
        num /= 2;
    }
    return binary;
}

int main()
{
    int num = 8; // Example integer

    // Convert integer to binary representation
    string binary = intToBinary(num);

    // Output binary representation without leading zeros
    cout << "Binary representation of " << num << " is " << binary << endl;

    int ans = stoi("10100101", nullptr, 2);
    stoi();
    
    cout << ans << endl;

    return 0;
}
