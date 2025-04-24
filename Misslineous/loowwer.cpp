#include <bits/stdc++.h>


int findJustSmaller(const std::vector<int>& arr, int k) {
    auto it = std::lower_bound(arr.begin(), arr.end(), k); // Find the first element not less than k
    if (it == arr.begin()) {
        // If no element is less than k, return a specific value (e.g., -1)
        return -1;
    } else {
        // Return the element just before the found position
        return *(--it);
    }
}

int main() {
    std::vector<int> arr = {1, 3, 8, 7, 9};
    int k = 6;
    int result = findJustSmaller(arr, k);
    
    if (result != -1) {
        std::cout << "Just smaller value than " << k << " is: " << result << std::endl;
    } else {
        std::cout << "No element smaller than " << k << " found in the array." << std::endl;
    }

int t=distance(arr.begin(),)
    cout<<
    
    return 0;
}
