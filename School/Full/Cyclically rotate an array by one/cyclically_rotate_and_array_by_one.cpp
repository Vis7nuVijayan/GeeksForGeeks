/*
 * Cyclically rotate an array by one
 *
 *		Author : Vishnu Vijayan
 *		  Date : Dec 8, 2017
 *		  Time : 6:45:10 PM
 *
 */

using namespace std;

#include <iostream>


void print_rotate(int a[], int n)
{
	int count = 0;
	int i = n-1;

	while(count < n)
	{
		cout << a[i] << " ";

		i = (i+1)%n;

		++count;
	}

	cout << endl;
}

int main()
{
	int testcases;
	cin >> testcases;

	int N ;

	while(testcases--)
	{
		cin >> N;
		
		int a[N];

		for(int i=0;i<N;++i)
			cin >> a[i];

		print_rotate(a, N);
	}

	return 0;
}
