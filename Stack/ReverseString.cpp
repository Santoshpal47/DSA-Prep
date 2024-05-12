#include <iostream>
#include <stack>
using namespace std;

int main()
{

    string name = "Santosh";
    stack<char> s;
    string ans="";

    cout<<"string :"<<name<<endl;

    for (int i = 0; i < name.length(); i++)
    {
        char ch = name[i];
        s.push(ch);
    }

    while (!s.empty()) {
      char ch = s.top();
      ans.push_back(ch);
      s.pop();
    }
    
    cout<<"Reversed string : "<<ans<<endl;

    return 0;
}