#include <iostream>
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

    for (int i = 0; i < size; i++)
    {
        int j = i;
        while (j > 0 && arr[j] < arr[j - 1])
        {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }

    cout << "sorted array :" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}