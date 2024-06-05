#include <iostream>
using namespace std;

void sort(int *arr, int size)
{
    // base case
    if (size == 0|| size==1)
    {
        return;
    }

    int swapped=0;

    for (int i = 0; i < size-1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
            swapped=1;
        }
    }

    if(swapped==0){
      return ;
    }


    sort(arr, size-1);
}
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

    sort(arr, size);

    cout << "sorted array :" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}