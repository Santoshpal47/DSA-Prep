#include <iostream>
using namespace std;

void merge(int *arr, int low, int mid, int high)
{
    int i = low;
    int j = mid + 1;
    int k = 0;
    int *temp = new int[high - low + 1];

    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            i++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }

    while (i <= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }

    while (j <= high)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }

    for (int i = low, k = 0; i <= high; i++, k++)
    {
        arr[i] = temp[k];
    }

    delete[] temp;
}

void mergeSort(int *arr, int low, int high)
{
    if (low >= high)
        return;

    int mid = low + (high - low) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main()
{
    int size = 9;
    int arr[size] = {1, 35, 2, 6, 37, 8, 48, 93, 36};
    cout << "Original array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    mergeSort(arr, 0, size - 1);

    cout << "Sorted array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
