/*
 * Count type of Characters
 *
 *		Author : Vishnu Vijayan
 *		  Date : Jan 9, 2018
 *		  Time : 9:11:58 PM
 *
 */

using namespace std;

#include <iostream>


void get_count(string str)
{
	int lowercase_count = 0;
	int uppercase_count = 0;
	int numerals_count = 0;
	int specialchar_count = 0;

	for(int i=0; i<str.length(); ++i)
	{
		if(str[i] >= '0' && str[i] <= '9')
			++numerals_count;

		else if(str[i] >= 'a' && str[i] <= 'z')
			++lowercase_count;

		else if(str[i] >= 'A' && str[i] <= 'Z')
			++uppercase_count;

		else
			++specialchar_count;
	}

	cout << uppercase_count << endl;
	cout << lowercase_count << endl;
	cout << numerals_count << endl;
	cout << specialchar_count << endl;
}

int main()
{
	int testcases;
	cin >> testcases;

	cin.ignore();

	string str;

	while(testcases--)
	{
		getline(cin, str);
		
		get_count(str);
	}

	return 0;
}
