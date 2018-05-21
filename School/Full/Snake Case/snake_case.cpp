/*
 * Snake Case
 *
 *		Author : Vishnu Vijayan
 *		  Date : 18-Mar-2018
 *		  Time : 6:04:28 PM
 *
 */

using namespace std;

#include <iostream>


string print_snake_case_string(string s, int n)
{
	while(s[0] == ' ')
	{
		s.erase(s.begin()+0);
		--n;
	}

	while(s[n-1] == ' ')
	{
		s.erase(s.end()-1);
		--n;
	}

	for(int i=0; i<n; ++i)
	{
		if(s[i] == ' ')
			s[i] = '_';

		else
			s[i] |= (1<<5);
	}

	return s;
}

int main()
{
	int test_cases;
	cin >> test_cases;
	
	while(test_cases--)
	{
		int N;
		cin >> N;
		cin.ignore();
		
		string s;
		getline(cin, s);

		cout << print_snake_case_string(s, N) << endl;
	}

	return 0;
}
