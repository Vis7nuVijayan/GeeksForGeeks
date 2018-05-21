/*
 * Max-Min conversion
 *
 *		Author : Vishnu Vijayan
 *		  Date : 10-Jan-2017
 *		  Time : 5:26:42 PM
 *
 */

using namespace std;

#include <iostream>


string replace(string s, int from, int to)
{
	string ss = "";
	for(char c : s)
	{
		if(c-'0' == from)
			ss += (to+'0');

		else
			 ss += c;
	}

	return ss;
}

int getSum(string s)
{
	string smin = replace(s,6,5);
	string smax = replace(s,5,6);

	return stoi(smin) + stoi(smax);
}

int main()
{
	int test_cases;
	cin >> test_cases;
	
	while(test_cases--)
	{
		string s;
		cin >> s;

		cout << getSum(s) << endl;
	}

	return 0;
}
