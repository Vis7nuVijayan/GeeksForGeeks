/*
 * Pronic Number
 *
 *		Author : Vishnu Vijayan
 *		  Date : Mar 5, 2018
 *		  Time : 2:30:15 PM
 *
 */

using namespace std;

#include <iostream>

int main()
{
	int testcases;
	cin >> testcases;

	while(testcases--)
	{
		int n;
		cin >> n;

		cout << 0 << " ";

		int pronic_number = 2;
		int i = 2;
		
		do
		{
			cout << pronic_number << " ";

			pronic_number = pronic_number/(i-1) * (i+1);
			++i;

		}while(pronic_number <= n);

		cout << endl;
	}

	return 0;
}
