/*
 * The Penalty Shootout
 *
 *		Author : Vishnu Vijayan
 *		  Date : 18-May-2018
 *		  Time : 3:00:04 PM
 *
 */

using namespace std;

#include <iostream>


int penalty_scored(string s)
{
	int goals = 0;

	for(int i=0; i<s.length(); ++i)
	{
		if(s[i] == '2')
			if(s[++i] == '1')
				++goals;
	}

	return goals;
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
		
		cout << penalty_scored(s) << endl;
	}

	return 0;
}
