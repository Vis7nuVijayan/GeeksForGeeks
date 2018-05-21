/*
 * GCD of two numbers
 *
 *		Author : Vishnu Vijayan
 *		  Date : Dec 2, 2017
 *		  Time : 1:18:55 PM
 *
 */

using namespace std;

#include <iostream>


int gcd(int a, int b)
{
	if(!b)
		return a;

	return gcd(b, a%b);
}

int main()
{
	int testcases;
	cin >> testcases;

	int A, B;

	while(testcases--)
	{
		cin >> A >> B;
		
		cout << gcd(A,B) << endl;
	}

	return 0;
}
