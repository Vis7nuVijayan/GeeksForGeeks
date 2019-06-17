/*
 * Tidy Number
 *
 *		Author : Vishnu Vijayan
 *		  Date : 17-Oct-2017
 *		  Time : 2:49:55 PM
 *
 */

using namespace std;

#include <iostream>


int is_tidy_number(long n)
{
	int last_digit, second_last_digit;

	while(n)
	{
		last_digit = n%10;
		n = n/10;
		second_last_digit = n%10;

		if(last_digit < second_last_digit)
			return 0;
	}

	return 1;
}

int main()
{
	int testcases;
	cin >> testcases;

	while(testcases--)
	{
		long n;
		cin >> n;
		
		cout << is_tidy_number(n) << endl;
	}

	return 0;
}
