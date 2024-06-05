#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int> arr, int size, int i)
{

    // base case
    if (i == size - 1 || size < 2)
    {
        return true;
    }
    if (arr[i] > arr[i + 1])
    {
        return false;
    }

    return isSorted(arr, size, i + 1);
}

int main()
{
    int size = 0;
    cout << "Enter the size of array :" << endl;
    cin >> size;

    vector<int> arr(size);

    cout << "Input array  :" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    cout << "Your array is :" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    bool ans = isSorted(arr, size, 0);
    if (ans)
        cout << "true";
    else
        cout << "false";
    // cout << ans << endl;

    return 0;
}