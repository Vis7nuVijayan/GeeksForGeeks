/*
 * Modulus of two double numbers
 *
 *		Author : Vishnu Vijayan
 *		  Date : 18-Mar-2018
 *		  Time : 12:52:14 PM
 *
 */

using namespace std;

#include <iostream>


double double_modulus(double a, double b)
{
	long q = a/b;

	return (a - q*b);
}

int main()
{
	int test_cases;
	cin >> test_cases;
	
	while(test_cases--)
	{
		double a, b;
		cin >> a >> b;
		
		cout << double_modulus(a,b) << endl;
	}

	return 0;
}
