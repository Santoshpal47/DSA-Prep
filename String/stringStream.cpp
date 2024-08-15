#include <iostream>
#include <sstream>
#include <map>

using namespace std;
void countFreq(string &str)
{

    stringstream s(str);
    string word;
    map<string, int> map;

    while (s >> word)
    {

        map[word]++;
    }

    for (auto &mp : map)
    {
        cout << mp.first << "->" << mp.second << endl;
    }
}

int main()
{

    string str;

    cout << "Input a string :" << endl;
    getline(cin, str);
    cout << endl;
    cout << "Frequency of words :" << endl;
    countFreq(str);

    return 0;
}