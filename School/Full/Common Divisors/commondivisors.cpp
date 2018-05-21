/*
 * Common Divisors
 *
 *		Author : Vishnu Vijayan
 *		  Date : 10-Jan-2017
 *		  Time : 12:15:47 PM
 *
 */

using namespace std;

#include <iostream>
#include <cmath>

int gcd(int a, int b)
{
	while(a != b)
	{
		if(a > b)
			a = a-b;

		else
			b = b-a;
	}

	return b;
}

int getCount(int n)
{
	int count = 0;
	int sqr = sqrt(n);
	for(int i=1;i<=sqr;++i)
		if(n%i == 0)
			count += 2;

	if(sqr*sqr == n)
		--count;

	return count;
}

int main()
{
	int test_cases;
	cin >> test_cases;
	
	while(test_cases--)
	{
		int a, b;
		cin >> a >> b;

		int n = gcd(a,b);
		
		cout << getCount(n) << endl;
	}

	return 0;
}
