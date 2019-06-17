/*
 * Pattern-1
 *
 *		Author : Vishnu Vijayan
 *		  Date : 18-May-2018
 *		  Time : 2:43:05 PM
 *
 */

using namespace std;

#include <iostream>


void print_pattern(int n)
{
	char c = 'A';

	for(int i=0; i<n; ++i)
	{
		for(int j=0; j<n; ++j)
		{
			if(i == 0 || j == 0 || i == n-1 || j == n-1)
				cout << c++;

			else
				cout << "$";
		}

		cout << endl;
	}
}

int main()
{
	int testcases;
	cin >> testcases;

	while(testcases--)
	{
		int N;
		cin >> N;
		
		print_pattern(N);
	}

	return 0;
}
