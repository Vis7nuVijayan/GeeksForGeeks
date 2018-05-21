/*
 * John's Haircut
 *
 *		Author : Vishnu Vijayan
 *		  Date : 18-Mar-2018
 *		  Time : 10:59:36 AM
 *
 */

using namespace std;

#include <iostream>
#include <cmath>

long print_expected_time(int n, int x)
{
	int temp;
	long sum = 0;

	for(int i=0; i<x; ++i)
	{
		cin >> temp;
		sum += temp;
	}



	return (sum*n)/x;
}

int main()
{
	int test_cases;
	cin >> test_cases;
	
	while(test_cases--)
	{
		int n,x;
		cin >> n >> x;
		
		cout << print_expected_time(n,x) << endl;
	}

	return 0;
}
