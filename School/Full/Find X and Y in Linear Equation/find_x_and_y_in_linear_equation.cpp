/*
 * Find X and Y in Linear Equation
 *
 *		Author : Vishnu Vijayan
 *		  Date : 18-Mar-2018
 *		  Time : 12:21:53 PM
 *
 */

using namespace std;

#include <iostream>
#include <cmath>


void print_solution(int a, int b, int n)
{
	int x = 0;
	float y;

	do
	{
		y = (n - (a*x))/(b*1.0);

		if(floor(y) == y)
		{
			cout << x << " " << y << endl;
			return;
		}

		++x;

	}while(y  >= 0);

	cout << "No solution" << endl;
}

int main()
{
	int test_cases;
	cin >> test_cases;
	
	while(test_cases--)
	{
		int a,b,n;
		cin >> a >> b >> n;
		
		print_solution(a,b,n);
	}

	return 0;
}
