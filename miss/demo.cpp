#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    int x;
    string str;
    A(int val, string s) : x(val), str(s) {}
};
int main()
{
    // vector<int> nums1 = {3, 2, 1, 5, 4, 10, 7, 9};
    // auto mini = min_element(begin(nums1), end(nums1));
    // int dis=distance(begin(nums1),mini);
    // cout << dis<<endl;
    // cout << *mini;
    // Disjoint

    A a(10, "santosh");
    cout<<a.x<<" "<<a.str;

    // int num;
    // cin >> num;
    // int ans = log10(num) + 1;
    // cout << num << endl;
    // cout << ans;
    return 0;
}
