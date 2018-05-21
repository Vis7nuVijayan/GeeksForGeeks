/*
 * Power Of Pow | Even Numbers
 *
 *		Author : Vishnu Vijayan
 *		  Date : 23-Mar-2018
 *		  Time : 8:56:16 PM
 *
 */

using namespace std;

#include <iostream>
#include <cmath>

long get_sum(int n)
{
	long sum = 0;
	int number = 2;

	for(int i=1; i<=n;++i, number += 2)
		sum += pow(number,2);

	return sum;
}

int main()
{
	int test_cases;
	cin >> test_cases;
	
	while(test_cases--)
	{
		int N;
		cin >> N;
		
		cout << get_sum(N) << endl;
	}

	return 0;
}
