/*
 * Print an element
 *
 *		Author : Vishnu Vijayan
 *		  Date : Dec 1, 2017
 *		  Time : 1:08:14 AM
 *
 */

using namespace std;

#include <iostream>

int main()
{
	int testcases;
	cin >> testcases;

	int N, I;

	while(testcases--)
	{
		cin >> N >> I;
		
		int array[N];

		for(int i=0;i<N;++i)
			cin >> array[i];

		cout << array[I] << endl;
	}

	return 0;
}
