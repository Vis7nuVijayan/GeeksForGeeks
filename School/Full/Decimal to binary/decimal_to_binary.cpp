/*
 * Decimal to binary
 *
 *		Author : Vishnu Vijayan
 *		  Date : Jan 14, 2018
 *		  Time : 6:09:48 PM
 *
 */

using namespace std;

#include <iostream>


int decimal_to_binary(int n)
{
	if(n == 0)
		return 0;

	if(n == 1)
		return 1;

	return 10*decimal_to_binary(n/2) + n%2;
}

int main()
{
	int testcases;
	cin >> testcases;

	int N;

	while(testcases--)
	{
		cin >> N;
		
		cout << decimal_to_binary(N) << endl;
	}

	return 0;
}
