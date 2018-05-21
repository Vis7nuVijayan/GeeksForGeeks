/*
 * Check if a string is Isogram or not
 *
 *		Author : Vishnu Vijayan
 *		  Date : 23-Mar-2018
 *		  Time : 12:09:05 AM
 *
 */

using namespace std;

#include <iostream>
#include <set>

int is_isogram(string s)
{
	set<char> characters;

	for(char c : s)
	{
		if(characters.find(c) != characters.end())
			return 0;

		else
			characters.insert(c);
	}

	return 1;
}

int main()
{
	int test_cases;
	cin >> test_cases;
	cin.ignore();
	
	while(test_cases--)
	{
		string s;
		getline(cin, s);

		cout << is_isogram(s) << endl;
	}

	return 0;
}
