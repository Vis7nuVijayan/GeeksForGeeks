/*
 * A Speed Breaker
 *
 *		Author : Vishnu Vijayan
 *		  Date : Mar 27, 2018
 *		  Time : 10:38:36 PM
 *
 */

using namespace std;

#include <iostream>
#include <iomanip>


void print_with_precision(float a, int b)
{
	cout << setprecision(b);
	cout << a;
	cout << endl;
}

int main()
{
	int testcases;
	cin >> testcases;

	while(testcases--)
	{
		float a;
		cin >> a;
		
		int b;
		cin >> b;

		print_with_precision(a,b);
	}

	return 0;
}
