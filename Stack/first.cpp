#include <iostream>
#include <stack>
using namespace std;

int main()
{

    stack<int> s;
    s.push(12);
    s.push(13);
    s.push(14);
    s.push(15);
    


    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}