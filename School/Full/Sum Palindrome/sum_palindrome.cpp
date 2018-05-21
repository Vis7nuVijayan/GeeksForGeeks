/*
 * Sum Palindrome
 *
 *		Author : Vishnu Vijayan
 *		  Date : Nov 23, 2017
 *		  Time : 12:50:00 AM
 *
 */

using namespace std;

#include <iostream>


int reverse(int n)
{
	int reverse = 0;

	while(n > 0)
	{
		reverse = reverse*10 + n%10;
		n /= 10;
	}

	return reverse;
}

int sum_palindrome(int n)
{
	if(n == reverse(n))
		return n;

	for(int i=1;i<=5;++i)
	{
		n += reverse(n);

		if(n == reverse(n))
			return n;
	}

	return -1;
}

int main()
{
	int testcases;
	cin >> testcases;

	int N;

	while(testcases--)
	{
		cin >> N;
		
		cout << sum_palindrome(N) << endl;
	}

	return 0;
}
