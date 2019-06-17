/*
 * Strings
 *
 *		Author : Vishnu Vijayan
 *		  Date : Nov 30, 2017
 *		  Time : 8:17:30 PM
 *
 */

using namespace std;

#include <iostream>


string print_string(string s1, string s2)
{
	if(s1.length() > s2.length())
		cout << s1.length() << endl;

	else
		cout << s2.length() << endl;

	return s1+s2;
}

int main()
{
	int testcases;
	cin >> testcases;
	cin.ignore();

	string s1, s2;

	while(testcases--)
	{
		getline(cin,s1);
		getline(cin,s2);
		
		cout << print_string(s1,s2) << endl;
	}

	return 0;
}
