/*
 * Remove vowels from string
 *
 *		Author : Vishnu Vijayan
 *		  Date : 10-Mar-2018
 *		  Time : 12:53:06 PM
 *
 */

using namespace std;

#include <iostream>
#include <algorithm>

string vowels_removed_string(string s)
{
	char vowels[] = {'a','e','i','o','u'};

	for(int i=0; i<5; ++i)
		s.erase(remove(s.begin(), s.end(), vowels[i]),s.end());

	return s;
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
		
		cout << vowels_removed_string(s) << endl;
	}

	return 0;
}
