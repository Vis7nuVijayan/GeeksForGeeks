/*
 * Sum of odd and even elements
 *
 *		Author : Vishnu Vijayan
 *		  Date : Mar 14, 2018
 *		  Time : 6:34:15 PM
 *
 */

using namespace std;

#include <iostream>


bool is_even(int num)
{
	if(num%2)
		return false;

	return true;
}

void print_odd_even_sum(int n)
{
	long odd_sum = 0;
	long even_sum = 0;

	for(int i=1; i<=n; ++i)
	{
		if(is_even(i))
			even_sum += i;

		else
			odd_sum += i;
	}

	cout << odd_sum << " " << even_sum << endl;
}

int main()
{
	int testcases;
	cin >> testcases;

	while(testcases--)
	{
		int N;
		cin >> N;
		
		print_odd_even_sum(N);
	}

	return 0;
}
