#include<iostream>
using namespace std;

void reverse(int arr[], int i, int j) {
    if (i >= j) {
        return; // Terminate recursion when indices cross or meet
    }
    
    swap(arr[i], arr[j]);
    reverse(arr, i + 1, j - 1);
}

int main() {
    int arr[] = {2, 3, 9, 5, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
   
    reverse(arr, 0, n - 1); // Call reverse function to actually reverse the array

    for (int j = 0; j < n; j++) {
        cout << arr[j] << " ";
    }
  
    return 0;
}
