/*
 * Change the string
 *
 *		Author : Vishnu Vijayan
 *		  Date : Jan 14, 2018
 *		  Time : 7:35:18 PM
 *
 */

using namespace std;

#include <iostream>


string to_lower(string s, int n)
{
	for(int i=0; i<s.length(); ++i)
		s[i] = s[i] | n;

	return s;
}

string to_upper(string s, int n)
{
	for(int i=0; i<s.length(); ++i)
		s[i] = s[i] & n;

	return s;
}

string change_string(string s)
{
	if((s[0]&32))
		return to_lower(s,32);

	return to_upper(s, 95);
}

int main()
{
	int testcases;
	cin >> testcases;

	cin.ignore();
	string s;

	while(testcases--)
	{
		getline(cin, s);
		
		cout << change_string(s) << endl;
	}

	return 0;
}
