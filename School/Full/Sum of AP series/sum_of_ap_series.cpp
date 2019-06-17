/*
 * Sum of AP series
 *
 *		Author : Vishnu Vijayan
 *		  Date : Mar 14, 2018
 *		  Time : 10:05:03 PM
 *
 */

using namespace std;

#include <iostream>


double ap_series_sum(double a, double d, double n)
{
	return (n/2)*(2*a+(n-1)*d);
}

int main()
{
	int testcases;
	cin >> testcases;

	while(testcases--)
	{
		double a,d,n;
		cin >> a >> d >> n;
		
		printf("%.2f\n", ap_series_sum(a,d,n));
	}

	return 0;
}
