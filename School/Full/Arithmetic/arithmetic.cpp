/*
 * Arithmetic
 *
 *		Author : Vishnu Vijayan
 *		  Date : Nov 29, 2017
 *		  Time : 7:44:54 PM
 *
 */

using namespace std;

#include <iostream>

int main()
{
	int testcases;
	cin >> testcases;

	int A, B;

	while(testcases--)
	{
		cin >> A >> B;

		if( A < B)
			swap(A,B);
		
		cout << A+B << endl;
		cout << A-B << endl;
		cout << A/B << endl;
		cout << A*B << endl;
	}

	return 0;
}
