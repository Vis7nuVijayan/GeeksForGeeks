/*
 * Balanced Array
 *
 *		Author : Vishnu Vijayan
 *		  Date : Jan 10, 2018
 *		  Time : 7:20:52 PM
 *
 */

using namespace std;

#include <iostream>


int get_balance_number(int n)
{
	int left_sum = 0;
	int right_sum = 0;

	int temp_value;

	for(int i=0; i<n; ++i)
	{
		cin >> temp_value;

		if(i < n/2)
			left_sum += temp_value;

		else
			right_sum += temp_value;
	}

	return abs(left_sum - right_sum);
}

int main()
{
	int testcases;
	cin >> testcases;

	int n;

	while(testcases--)
	{
		cin >> n;
		
		cout << get_balance_number(n) << endl;
	}

	return 0;
}
