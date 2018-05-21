/*
 * Reverse a String
 *
 *		Author : Vishnu Vijayan
 *		  Date : Nov 29, 2017
 *		  Time : 7:38:49 PM
 *
 */

using namespace std;

#include <iostream>


string reverse(string s)
{
	int left = 0;
	int right = s.length() - 1;

	while(left < right)
	{
		swap(s[left], s[right]);
		++left;
		--right;
	}

	return s;
}

int main()
{
	int testcases;
	cin >> testcases;
	cin.ignore();

	string S;

	while(testcases--)
	{
		getline(cin,S);
		
		cout << reverse(S) << endl;
	}

	return 0;
}
