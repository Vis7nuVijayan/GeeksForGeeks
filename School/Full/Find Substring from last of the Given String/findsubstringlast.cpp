/*
 * Find Substring from last of the Given String
 *
 *		Author : Vishnu Vijayan
 *		  Date : 10-Jan-2017
 *		  Time : 6:22:04 PM
 *
 */

using namespace std;

#include <iostream>
#include <algorithm>

int getIndex(string s, string ss)
{
	reverse(s.begin(), s.end());
	reverse(ss.begin(), ss.end());

	int s_index = 0;
	int ss_index = 0;
	while(s_index < s.length())
	{
		if(s[s_index] == ss[ss_index])
		{
			++s_index;
			++ss_index;
		}

		else if(ss_index == 0)
			++s_index;

		else
			ss_index = 0;

		if(ss_index == ss.length())
			return s.length()-s_index+1;
	}

	return -1;
}

int main()
{
	int test_cases;
	cin >> test_cases;
	
	while(test_cases--)
	{
		string ss, s;
		cin >> ss >> s;
		
		cout << getIndex(s, ss) << endl;
	}

	return 0;
}
