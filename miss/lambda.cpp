#include <bits/stdc++.h>
using namespace std;
bool lambda(vector<int> &a, vector<int> &b)
{
    if (a[0] > b[0])
    {
        return true;
    }
    return false;
}
bool lambda2(vector<int> a, vector<int> b)
{
    if (a[1] > b[1])
    {
        return true;
    }
    return false;
}
int main()
{
    // vector<int> nums = {1, 0, 3, 6, 4, 8, 9};
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    vector<vector<int>> nums = {{1, 0}, {3, 6}, {4, 8}, {1, 3}};

    cout << "unsorted" << endl;
    for (auto &num : nums)
    {
        cout << "{" << num[0] << "," << num[1] << "}" << ",";

        // cout << num << " ";
    }
    cout << endl;
    cout << endl;

    cout << "sorted in acsending " << endl;

    sort(begin(nums), end(nums));

    for (auto &num : nums)
    {
        cout << "{" << num[0] << "," << num[1] << "}" << ",";

        // cout << num << " ";
    }
    cout << endl;
    cout << endl;

    nums = {{1, 0}, {3, 6}, {4, 8}, {1, 3}};

    cout << endl;

    cout << "sort in decending on first element of pair" << endl;

    sort(begin(nums), end(nums), lambda);

    for (auto &num : nums)
    {
        cout << "{" << num[0] << "," << num[1] << "}" << ",";

        // cout << num << " ";
    }
    cout << endl;

    cout << endl;

    cout << "sort in decending on second element of pair" << endl;

    sort(begin(nums), end(nums), lambda2);

    for (auto &num : nums)
    {
        cout << "{" << num[0] << "," << num[1] << "}" << ",";
        // cout << num << " ";
    }
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    return 0;
}