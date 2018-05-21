/*
 * Upper case conversion
 *
 *		Author : Vishnu Vijayan
 *		  Date : Mar 14, 2018
 *		  Time : 5:00:02 PM
 *
 */

using namespace std;

#include <iostream>


string string_convert(string s)
{
	int i=1;

	if(s[0] != ' ')
	{	s[0] &= ~(1<<5);
		++i;
	}

	for(; i<s.length(); ++i)
		if(s[i-1] == ' ' && s[i] >= 'a' && s[i] <= 'z')
			s[i] &= ~(1<<5);

	return s;
}

int main()
{
	int testcases;
	cin >> testcases;
	cin.ignore();

	while(testcases--)
	{
		string s;
		getline(cin, s);
		
		cout << string_convert(s) << endl;
	}

	return 0;
}
