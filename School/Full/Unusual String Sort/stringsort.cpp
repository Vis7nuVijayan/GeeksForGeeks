/*
 * Unusual String Sort
 *
 *		Author : Vishnu Vijayan
 *		  Date : 10-Jan-2017
 *		  Time : 6:01:02 PM
 *
 */

using namespace std;

#include <iostream>
#include <algorithm>

string stringAppend(string s, int c)
{
	string ss;
	int slen = s.size();

	for(int i=c;i<slen;++i)
		ss += s[i];

	return ss;
}

string unusualStringSort(string s)
{
	string capital, small;
	for(char c : s)
	{
		if(c > 90)
			small += c;

		else
			capital += c;
	}

	sort(capital.begin(), capital.end());
	sort(small.begin(), small.end());

	int C=0, c=0;
	string ss;
	while(C < capital.size() && c < small.size())
	{
		ss += capital[C++];
		ss += small[c++];
	}

	if(C == capital.size())
		ss += stringAppend(small,c);

	if(c == small.size())
		ss += stringAppend(capital,C);

	return ss;
}

int main()
{
	int test_cases;
	cin >> test_cases;
	
	while(test_cases--)
	{
		string s;
		cin >> s;
		
		cout << unusualStringSort(s) << endl;
	}

	return 0;
}
