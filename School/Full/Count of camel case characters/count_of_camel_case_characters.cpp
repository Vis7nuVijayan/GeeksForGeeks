/*
 * Count of camel case characters
 *
 *		Author : Vishnu Vijayan
 *		  Date : 11-Oct-2017
 *		  Time : 2:48:39 PM
 *
 */

using namespace std;

#include <iostream>

int main()
{
	int testcases;
	cin >> testcases;

	while(testcases--)
	{
		cin.ignore();

		string s;
		cin >> s;
		
		int camel_case_count = 0;

		for(int i=0;i<s.length();++i)
			if(s[i] >= 'A' && s[i] <= 'Z')
				++camel_case_count;

		cout << camel_case_count << endl;
	}

	return 0;
}
