#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums1 = {3, 2, 1, 5, 4, 10, 7, 9};
    auto mini = min_element(begin(nums1), end(nums1));
    int dis=distance(begin(nums1),mini);
    cout << dis<<endl;
    cout << *mini;
    // Disjoint
    return 0;
}
