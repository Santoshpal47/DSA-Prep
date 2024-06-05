#include <iostream>
using namespace std;
bool checkpanildrome(string str, int i, int j)
{

    if (i > j)
    {
        return true;
    }
    if (str[i] == str[j])
    {
        return checkpanildrome(str, i + 1, j - 1);
    }
    return false;
}
int main()
{

    string str = "aba";
    bool check = checkpanildrome(str, 0, str.length() - 1);

    if (check)
        cout << "true";
    else
        cout << "false";

    return 0;
}