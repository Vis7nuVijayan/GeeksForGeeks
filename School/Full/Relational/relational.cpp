/*
 * Relational
 *
 *		Author : Vishnu Vijayan
 *		  Date : Dec 1, 2017
 *		  Time : 5:26:42 PM
 *
 */

using namespace std;

#include <iostream>


string relation(int a, int b)
{
	if(a > b)
		return " is greater than ";

	else if (a < b)
		return " is less than ";

	else
		return " is equals to ";
}

int main()
{
	int testcases;
	cin >> testcases;

	int A,B;

	while(testcases--)
	{
		cin >> A >> B;
		
		cout << A << relation(A,B) << B << endl;
	}

	return 0;
}
