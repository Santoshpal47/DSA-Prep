#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> arr = {4, 5, 6};
    int n = arr.size();
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        int temp = 0;
        for (int j = i; j < n; j++)
        {
            temp += arr[j];
            sum += temp;
        }
    }
    cout << sum;

    // string num = "00011010111";
    // int n=0;
    // int len = num.length();
    // int p2=1;
    // for (int i = len - 1; i >= 0; i--)
    // {

    //     if(num[i]=='1'){
    //       n+=p2;
    //     }
    //     p2*=2;

    //     // n += (num[i]-'0') * pow(2,len - i - 1);
    // }
    // cout << bitset<32>(num).to_ulong() << endl;
    // cout << n;

    // auto n = 13 << 5;

    // cout << typeid(n).name() << endl;
    // cout << n;

    // double val = 3.76;
    // double myDouble = 3.14;
    // int myInt = (int)myDouble;

    // cout << myInt << endl;

    // cout << val << endl;
    // // double rem = val % 10.00;
    // double r = 5;

    // if (myInt < myDouble)
    // {
    //     cout << "true val -> 3.76 is smaller than 5" << endl;
    //     myInt++;
    // }
    // else
    // {
    //     cout << "bdskskhs" << endl;
    // }

    // // if (val > rem)
    // // {
    // //     rem++;
    // // }
    // cout << myInt;

    return 0;
}