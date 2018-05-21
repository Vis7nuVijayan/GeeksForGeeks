/*
 * Perfect Reversible String
 *
 *		Author : Vishnu Vijayan
 *		  Date : 10-Jan-2017
 *		  Time : 12:32:53 PM
 *
 */

#include<iostream>

using namespace std;


int isPalindrome(string s, int slen)
{
	if(slen == 1)
		return 1;

	for(int i=0;i<slen/2;++i)
		if(s[i] != s[slen-1-i])
			return 0;

	return 1;
}

int main()
 {
	//code

	int test_cases;
	cin >> test_cases;

	while(test_cases--)
	{
		int n;
		string s;
		cin >> n >> s;

		cout << isPalindrome(s,n) << endl;
	}

	return 0;
}
