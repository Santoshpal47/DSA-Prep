#include <bits/stdc++.h>
using namespace std;

class Disjoint
{
private:
    vector<int> parent;
    vector<int> rank;

public:
    Disjoint(int size)
    {
        parent.resize(size);
        rank.resize(size);

        for (int i = 0; i < size; i++)
        {
            parent[i] = i;
            rank[i] = 0;
        }
    }

    int findPar(int e)
    {
        if (e == parent[e])
        {
            return e;
        }

        return parent[e] = findPar(parent[e]);
    }

    void unionSet(int x, int y)
    {
        auto up_x = findPar(x);
        auto up_y = findPar(y);

        if (up_x == up_y)
        {
            cout << x << " and " << y << " have the same parent: " << up_x << endl;
            return;
        }

        if (rank[up_x] > rank[up_y])
        {
            parent[up_y] = up_x;
        }
        else if (rank[up_x] < rank[up_y])
        {
            parent[up_x] = up_y;
        }
        else
        {
            parent[up_y] = up_x;
            rank[up_x]++;
        }
    }
};

int main(void)
{
    int size = 8;
    Disjoint ds(size);
    vector<pair<int, int>> temp = {
        {1, 2}, {2, 3}, {4, 5}, {6, 7}, {5, 6}, {3, 7}};

    for (const auto &it : temp)
    {
        auto x = it.first;
        auto y = it.second;
        cout << "Parent of " << x << " is: " << ds.findPar(x) << endl;
        cout << "Parent of " << y << " is: " << ds.findPar(y) << endl;
        cout << endl;
        cout << "doing union set of " << x << " and " << y << endl;
        ds.unionSet(x, y);
        cout << "Parent of " << x << " is: " << ds.findPar(x) << endl;
        cout << "Parent of " << y << " is: " << ds.findPar(y) << endl;
        cout << endl;
    }

    return 0;
}