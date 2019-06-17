/*
 * Reversing the vowels
 *
 *		Author : Vishnu Vijayan
 *		  Date : Nov 29, 2017
 *		  Time : 1:23:50 AM
 *
 */

using namespace std;

#include <iostream>
#include <set>


set<char> vowels = {'a','e','i','o','u'};

void swap(string* s, int left, int right)
{
	char c;

	c = (*s)[left];
	(*s)[left] = (*s)[right];
	(*s)[right] = c;
}

string reverse_the_vowels(string s)
{
	int left = 0;
	int right = s.length() - 1;

	while(true)
	{
		while(left <= s.length() && vowels.find(s[left]) == vowels.end())
			++left;

		while(right >= 0 && vowels.find(s[right]) == vowels.end())
			--right;


		if(left < right)
		{
			swap(&s,left,right);
			++left;
			--right;
		}

		else
			return s;
	}
}

int main()
{
	int testcases;
	cin >> testcases;

	cin.ignore();

	string s;

	while(testcases--)
	{
		getline(cin, s);
		
		cout << reverse_the_vowels(s) << endl;
	}

	return 0;
}
