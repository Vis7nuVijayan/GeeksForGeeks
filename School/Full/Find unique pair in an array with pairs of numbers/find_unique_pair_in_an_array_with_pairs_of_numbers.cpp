/*
 * Find unique pair in an array with pairs of numbers
 *
 *		Author : Vishnu Vijayan
 *		  Date : Mar 14, 2018
 *		  Time : 11:54:56 PM
 *
 */

using namespace std;

#include <iostream>
#include <algorithm>


void print_unique_pair(int a[], int n)
{
	sort(a,a+n);

	int unique_xor = 0;

	for(int i=0; i<n; ++i)
		unique_xor ^= a[i];

	for(int i=0; i<n-1; ++i)
	{
		for(int j=i; j<n; ++j)
		{
			if((a[i]^a[j]) == unique_xor)
			{
				cout << a[i] << " " << a[j] << endl;
				return;
			}
		}
	}
}

int main()
{
	int testcases;
	cin >> testcases;

	while(testcases--)
	{
		int N;
		cin >> N;

		int array[N];
		
		for(int i=0; i<N; ++i)
			cin >> array[i];

		print_unique_pair(array, N);
	}

	return 0;
}
