#include <iostream>
using namespace std;
int sum(int arr[], int size, int total, int index)
{

    // base case
    if (index == size)
    {
        return total;
    }

    return sum(arr, size, total + arr[index], index + 1);
}
int main()
{
    int arr[5] = {2, 3, 5, 89, 6};
    int total = sum(arr, 5, 0, 0);
    cout << total;

    return 0;
}