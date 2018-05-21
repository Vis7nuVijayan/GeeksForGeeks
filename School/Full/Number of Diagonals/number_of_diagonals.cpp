/*
 * Number of Diagonals
 *
 *		Author : Vishnu Vijayan
 *		  Date : Jan 9, 2018
 *		  Time : 11:50:05 PM
 *
 */

using namespace std;

#include <iostream>

int main()
{
	int testcases;
	cin >> testcases;

	int N;

	while(testcases--)
	{
		cin >> N;
		
		cout << (N*(N-3))/2 << endl;
	}

	return 0;
}
