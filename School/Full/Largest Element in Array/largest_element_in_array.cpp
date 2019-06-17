/*
 * Largest Element in Array
 *
 *		Author : Vishnu Vijayan
 *		  Date : Dec 1, 2017
 *		  Time : 5:33:31 PM
 *
 */

using namespace std;

#include <iostream>

int main()
{
	int testcases;
	cin >> testcases;

	int N, max_number, temp;

	while(testcases--)
	{
		cin >> N;

		max_number = 0;

		for(int i=0;i<N;++i)
		{
			cin >> temp;
			max_number = max(temp, max_number);
		}
		
		cout << max_number << endl;
	}

	return 0;
}
