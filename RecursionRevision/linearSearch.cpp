#include <iostream>
using namespace std;
bool search(int arr[], int size, int e)
{

    // base case
    if (size == 0)
    {
        return false;
    }

    if (arr[0] != e)
    {
        search(arr + 1, size - 1, e);
    }
    else
    {
        return true;
    }
}
int main()
{

    int arr[9] = {1, 3, 5, 2, 8, 9, 6, 34, 74};

    bool found = search(arr, 9, 89);
    if (found == 1)
        cout << "found";
    else
        cout << "not found";

    return 0;
}