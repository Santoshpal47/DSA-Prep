#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int size = 9;
    int arr[size] = {1, 35, 2, 6, 37, 8, 48, 93, 36};
    cout << "original array :" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = size - 1; i >= 0; i--)
    {
        int didswap = 0;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                didswap = 1;
            }
        }
        if (didswap == 0)
        {
            break;
        }
    }

    cout << "sorted array :" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}