/*
 * Krishnamurthy number
 *
 *		Author : Vishnu Vijayan
 *		  Date : Jan 14, 2018
 *		  Time : 12:47:56 PM
 *
 */

using namespace std;

#include <iostream>


int factorial(int n)
{
	if(n == 1 || n == 0)
		return 1;

	return n * factorial(n-1);
}

string is_Krishnamurthy_number(int n)
{
	int kmn = 0;
	int value;
	int number = n;

	while(number > 0)
	{
		value = number%10;
		kmn += factorial(value);
		number /= 10;
	}

	if(kmn == n)
		return "YES";

	return "NO";
}

int main()
{
	int testcases;
	cin >> testcases;

	int N;

	while(testcases--)
	{
		cin >> N;
		
		cout << is_Krishnamurthy_number(N) << endl;
	}

	return 0;
}
