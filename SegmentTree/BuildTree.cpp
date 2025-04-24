#include <bits/stdc++.h>
using namespace std;

void BuildTree(vector<int> &segTree, vector<int> &arr, int start, int end, int index)
{

    if (start == end)
    {
        segTree[index] = arr[start];
        return;
    }
    int mid = start + ((end - start) >> 1);
    BuildTree(segTree, arr, start, mid, (2 * index) + 1);
    BuildTree(segTree, arr, mid + 1, end, (2 * index) + 2);

    segTree[index] = segTree[(2 * index) + 1] + segTree[(2 * index) + 2];
}
void update(vector<int> &segTree, int start, int end, int index, int idx, int element)
{

    if (start == end)
    {
        segTree[index] = element;
        return;
    }

    int mid = start + ((end - start) >> 1);

    if (idx <= mid)
    {
        update(segTree, start, mid, (2 * index) + 1, idx, element);
    }
    else
    {
        update(segTree, mid + 1, end, (2 * index) + 2, idx, element);
    }

    segTree[index] = segTree[(2 * index) + 1] + segTree[(2 * index) + 2];
}

int rangeSum(vector<int> &segTree, int left, int right, int index, int start, int end)
{

    // out of bound
    if (end < left || start > right)
    {
        return 0;
    }
    // entirely inside
    if (left >= start && right <= end)
    {
        return segTree[index];
    }
    int mid = left + ((right - left) >> 1);
    return rangeSum(segTree, left, mid, (2 * index) + 1, start, end) +
           rangeSum(segTree, mid + 1, right, (2 * index) + 2, start, end);
}

void print(vector<int> &segTree, vector<int> &arr)
{
    cout << "Given array:" << endl;
    for (auto &a : arr)
    {
        cout << a << " ";
    }
    cout << endl;
    cout << "Segment Tree's array:" << endl;
    for (auto &a : segTree)
    {
        cout << a << " ";
    }
    cout << endl;
}
int main()
{

    vector<int> arr = {3, 1, 2, 7};
    int n = arr.size();
    vector<int> segTree(2 * n, -1);
    BuildTree(segTree, arr, 0, n - 1, 0);
    cout << endl;
    cout << "Building Segment Tree:" << endl;
    print(segTree, arr);
    cout << endl;

    int start = 1, end = 3;
    cout << "Range sum Query: [" << start << "," << end << "]" << endl;
    int result = rangeSum(segTree, 0, n - 1, 0, start, end);
    cout << result << endl;

    int idx = 3;
    int element = 31;
    cout << "Updating Segment Tree at index " << idx << " to " << element << endl;
    arr[idx] = element;
    update(segTree, 0, n - 1, 0, idx, element);
    print(segTree, arr);

    start = 1;
    end = 3;
    cout << "Range sum Query: [" << start << "," << end << "]" << endl;
    result = rangeSum(segTree, 0, n - 1, 0, start, end);
    cout << result << endl;

    return 0;
}