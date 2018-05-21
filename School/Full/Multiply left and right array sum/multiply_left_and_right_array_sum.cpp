/*
 * Multiply left and right array sum
 *
 *		Author : Vishnu Vijayan
 *		  Date : 18-May-2018
 *		  Time : 3:10:16 PM
 *
 */

using namespace std;

#include <iostream>


int get_array_sum(int a[], int beg, int end)
{
	int sum = 0;

	for(int i=beg; i<end; ++i)
		sum += a[i];

	return sum;
}

int main()
{
	int testcases;
	cin >> testcases;

	while(testcases--)
	{
		int N;
		cin >> N;

		int A[N];
		for(int i=0; i<N; ++i)
			cin >> A[i];
		
		int left_sum = get_array_sum(A, 0, N/2);
		int right_sum = get_array_sum(A, N/2, N);

		cout << left_sum * right_sum << endl;
	}

	return 0;
}
