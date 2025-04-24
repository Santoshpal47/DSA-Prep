#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> nums = {3, 7, 2, 9, 4, 0, 5, 7, 2};
    int sum = accumulate(nums.begin() + 4, nums.begin() + 9, 0);
    cout << sum ;
    return 0;
}