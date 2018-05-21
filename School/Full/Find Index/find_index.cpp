/*
 * Find Index
 *
 *		Author : Vishnu Vijayan
 *		  Date : Dec 8, 2017
 *		  Time : 8:45:59 PM
 *
 */

using namespace std;

#include <iostream>


void print_index(int a[], int n, int key)
{
	int start_index = -1;
	int end_index = -1;

	for(int i=0; i<n; ++i)
	{
		if(a[i] == key)
		{
			if(start_index == -1)
			{
				start_index = i;
				end_index = i;
			}

			else
				end_index = i;
		}
	}

	cout << start_index << " " << end_index << endl;
}

int main()
{
	int testcases;
	cin >> testcases;

	int N;

	while(testcases--)
	{
		cin >> N;

		int array[N];
		
		for(int i=0;i<N;++i)
			cin >> array[i];

		int key;
		cin >> key;

		print_index(array, N, key);
	}

	return 0;
}
