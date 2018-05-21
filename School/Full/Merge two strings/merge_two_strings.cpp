/*
 * Merge two strings
 *
 *		Author : Vishnu Vijayan
 *		  Date : 10-Mar-2018
 *		  Time : 11:12:26 AM
 *
 */

using namespace std;

#include <iostream>


string merged_string(string s1, string s2)
{
	string s;

	int s1_iterator = 0;
	int s2_iterator = 0;

	while(s1_iterator < s1.length() && s2_iterator < s2.length())
	{
		if(s1_iterator <= s2_iterator)
			s += s1[s1_iterator++];

		else
			s += s2[s2_iterator++];
	}

	s = s + s1.substr(s1_iterator) + s2.substr(s2_iterator);

	return s;
}

int main()
{
	int test_cases;
	cin >> test_cases;
	cin.ignore();

	while(test_cases--)
	{
		string s1, s2;
		
		cin >> s1 >> s2;

		cout << merged_string(s1, s2) << endl;
	}

	return 0;
}
