/*
 * Count Digits
 *
 *		Author : Vishnu Vijayan
 *		  Date : Jan 14, 2018
 *		  Time : 3:07:57 PM
 *
 */

using namespace std;

#include <iostream>


int count_digits(int n)
{
	int value;
	int number = n;
	int count = 0;

	while(number > 0)
	{
		value = number%10;

		if(value && !(n%value))
			++count;

		number /= 10;
	}

	return count;
}

int main()
{
	int testcases;
	cin >> testcases;

	int N;

	while(testcases--)
	{
		cin >> N;
		
		cout << count_digits(N) << endl;
	}

	return 0;
}
