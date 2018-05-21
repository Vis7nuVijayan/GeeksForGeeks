/*
 * Check String
 *
 *		Author : Vishnu Vijayan
 *		  Date : Jan 14, 2018
 *		  Time : 6:56:42 PM
 *
 */

using namespace std;

#include <iostream>


string is_character_same(string s)
{
	for(int i=0;i<s.length()-1; ++i)
	{
		if(s[i] != s[i+1])
			return "NO";
	}

	return "YES";
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
		
		cout << is_character_same(s) << endl;
	}

	return 0;
}
