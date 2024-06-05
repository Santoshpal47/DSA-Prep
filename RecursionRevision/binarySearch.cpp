#include <iostream>
using namespace std;
bool binarySearch(int arr[], int size, int e, int start, int end)
{

    if (start > end)
    {
        return false;
    }

    int mid = (start + end) / 2;

    if (arr[mid] > e)
    {
        return binarySearch(arr, size, e, start, mid - 1);
    }
    else if (arr[mid] < e)
    {
        return binarySearch(arr, size, e, mid + 1, end);
    }
    else
    {
        return true;
    }
}
int main()
{

    int arr[9] = {1, 2, 3, 5, 6, 8, 9, 34, 74};
    int size = 9;
    int start = 0;
    int end = size - 1;

    bool found = binarySearch(arr, size, 74, start, end);
    if (found == 1)
    {
        cout << "found";
    }
    else
    {
        cout << "not found";
    }

    return 0;
}