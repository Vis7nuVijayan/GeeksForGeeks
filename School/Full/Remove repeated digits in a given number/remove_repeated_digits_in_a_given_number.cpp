/*
 * Remove repeated digits in a given number
 *
 *		Author : Vishnu Vijayan
 *		  Date : 16-May-2018
 *		  Time : 9:55:52 PM
 *
 */

using namespace std;

#include <iostream>

int main()
{
	int testcases;
	cin >> testcases;

	cin.ignore();

	while(testcases--)
	{
		string s, new_number;
		getline(cin, s);

		char prev_number = ' ';

		for(char c : s)
		{
			if(prev_number != c)
			{
				prev_number = c;
				new_number += c;
			}
		}

		cout << new_number << endl;
	}

	return 0;
}
