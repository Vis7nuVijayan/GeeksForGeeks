/*
 * Maximum money
 *
 *		Author : Vishnu Vijayan
 *		  Date : Dec 10, 2017
 *		  Time : 8:07:22 PM
 *
 */

using namespace std;

#include <iostream>

int main()
{
	int testcases;
	cin >> testcases;

	int N, money;

	while(testcases--)
	{
		cin >> N >> money;
		
		if(N%2)
			++N;

		cout << N/2 * money << endl;
	}

	return 0;
}
