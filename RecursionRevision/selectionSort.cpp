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

    for (int i = 0; i < size - 1; i++)
    {
        int min_index = i;
        for (int j = i; j < size; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        swap(arr[min_index], arr[i]);
    }
    cout << "sorted array :" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}