/*
 * Sum of fifth powers of the first n natural numbers
 *
 *		Author : Vishnu Vijayan
 *		  Date : 03-Apr-2018
 *		  Time : 9:47:58 PM
 *
 */

using namespace std;

#include <iostream>

void print_fifth_power_sum(int n)
{
	long sum = 0;

	for(long i=1; i<=n; ++i)
		sum += (i*i*i*i*i);

	cout << sum;
}

int main()
{
	int test_cases;
	cin >> test_cases;
	
	while(test_cases--)
	{
		int N;
		cin >> N;

		print_fifth_power_sum(N);
		
		cout << endl;
	}

	return 0;
}
