#include <bits/stdc++.h>
using namespace std;

string removeSpaces(string str)
{
	stringstream ss(str);
	string temp;

	str = "";


	while (ss >> temp) {

		// ss >> temp;
		str = str + temp;
	}
	return str;
}

int main()
{

	string s = "This is a test";
	cout << removeSpaces(s) << endl;

	s = "geeks for geeks";
	cout << removeSpaces(s) << endl;

	s = "geeks quiz is awesome!";
	cout << removeSpaces(s) << endl;

	s = "I love	 to	 code";
	cout << removeSpaces(s) << endl;

	return 0;
}
