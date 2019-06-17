/*
 * Find all factorial numbers less than or equal to N
 *
 *		Author : Vishnu Vijayan
 *		  Date : Mar 17, 2018
 *		  Time : 7:14:07 PM
 *
 */

using namespace std;

#include <iostream>


void print_all_factorials(long n)
{
	long fact = 1;
	int count = 1;

	do
	{
		cout << fact << " ";

		++count;
		fact *= count;

	}while(fact <= n);

	cout << endl;
}

int main()
{
	int testcases;
	cin >> testcases;

	while(testcases--)
	{
		long N;
		cin >> N;
		
		print_all_factorials(N);
	}

	return 0;
}
