#include <bits/stdc++.h>
using namespace std;



    bool correct(vector<int>& arr) {
        cout << "Checking correctness of arr: ";
        for (int i = 1; i < arr.size(); i++) {
            cout << arr[i] << " ";
            if (arr[i] == 0)
                return false;
        }
        cout << endl;
        return true;
    }

    void solve(vector<int>& nums, int i, vector<int>& temp, vector<int>& arr) {
        if (i == nums.size()) {
            int sum = accumulate(temp.begin(), temp.end(), 0);
            cout << "Subset sum: " << sum << " with subset {";
            for (int num : temp) cout << num << " ";
            cout << "}" << endl;

            if (sum < arr.size())  
                arr[sum] = 1;
            return;
        }

        // Include nums[i]
        temp.push_back(nums[i]);
        solve(nums, i + 1, temp, arr);
        temp.pop_back();

        // Exclude nums[i]
        solve(nums, i + 1, temp, arr);
    }

    bool vishnuKiGand(vector<int>& dp, int i, vector<int>& vish,
                      vector<int>& nums, int n, int& ans) {
        cout << "Recursing at index: " << i << ", current vish: {";
        for (int x : vish) cout << x << " ";
        cout << "}, ans: " << ans << endl;

        if (ans != INT_MAX)
            return true; 

        if (i == dp.size()) {
            vector<int> vk(n + 1, 0);
            vk[0] = 1;
            vector<int> tempp;
            vector<int> tempNums = nums;

            tempNums.insert(tempNums.end(), vish.begin(), vish.end());
            solve(tempNums, 0, tempp, vk);

            if (correct(vk)) {
                ans = (int)vish.size();
                cout << "Found a valid solution with " << ans << " patches" << endl;
                return true; 
            }
            return false;
        }

        // Include dp[i]
        vish.push_back(dp[i]);
        if (vishnuKiGand(dp, i + 1, vish, nums, n, ans))
            return true; 
        vish.pop_back();

        // Exclude dp[i]
        if (vishnuKiGand(dp, i + 1, vish, nums, n, ans))
            return true; 

        return false;
    }

    int minPatches(vector<int>& nums, int n) {
        vector<int> arr(n + 1, 0);
        arr[0] = 1;
        vector<int> temp;
        solve(nums, 0, temp, arr);

        if (correct(arr))
            return 0;

        unordered_set<int> st(nums.begin(), nums.end());
        vector<int> dp;
        for (int i = 1; i <= n; i++) {
            if (!st.count(i))
                dp.push_back(i);
        }

        cout << "Missing numbers to consider as patches: {";
        for (int x : dp) cout << x << " ";
        cout << "}" << endl;

        vector<int> vish;
        int ans = INT_MAX;
        vishnuKiGand(dp, 0, vish, nums, n, ans);

        return ans == INT_MAX ? 0 : ans;
    }


int main() {
   
    vector<int> arr;
    int n, size;

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter the array elements: ";
    for (int i = 0; i < size; i++) {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    cout << "Enter the value of n: ";
    cin >> n;

    int result = minPatches(arr, n);
    cout << "Minimum patches required: " << result << endl;

    return 0;
}
