/*
 * Segregate 0s and 1s
 *
 *		Author : Vishnu Vijayan
 *		  Date : Dec 5, 2017
 *		  Time : 8:34:12 PM
 *
 */

using namespace std;

#include <iostream>


void segregate(int c[], int n)
{
	int left = 0;
	int right = n-1;

	while(left < right)
	{
		while(left < n && c[left] != 1)
			++left;

		while(right >= 0 && c[right] != 0 )
			--right;

		if(left < right)
		{
			swap(c[left], c[right]);
			left++;
			--right;
		}
	}
}

int main()
{
	int testcases;
	cin >> testcases;

	int N;

	while(testcases--)
	{
		cin >> N;

		int C[N];

		for(int i=0;i<N;++i)
			cin >> C[i];

		segregate(C, N);

		for(int i=0;i<N;++i)
			cout << C[i] << " ";

		cout << endl;
	}

	return 0;
}
