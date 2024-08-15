#include <bits/stdc++.h>
using namespace std;

class KthLargest
{
private:
    int k;
    vector<int> nums;

public:
    KthLargest(int k, vector<int> &nums)
    {
        this->k = k;
        this->nums = nums;
    }

    int add(int val)
    {

        nums.push_back(val);

        sort(nums.begin(), nums.end());

        return nums[k - 1];
    }
};

int main()
{

    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    vector<int> temp;
    int index=4;
    // tmep.assign(initialNums.begin()+1,initialNums.end()-1);
    temp.assign(nums.begin() + index, nums.end());
    temp.insert(temp.end(),nums.begin(), nums.end() - index+1);
    // temp.assign(nums.begin(), nums.end() - index+1);

    for (auto i : temp)
    {
        cout << i << endl;
    }

    // auto it = initialNums.begin();
    // advance(it, 3);
    // cout << *it;
    // KthLargest temp(3, initialNums);

    // cout << temp.add(6) << endl;
    // cout << temp.add(0) << endl;
    // cout << temp.add(1) << endl;

    return 0;
}