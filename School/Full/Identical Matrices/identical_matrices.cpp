/*
 * Identical Matrices
 *
 *		Author : Vishnu Vijayan
 *		  Date : Dec 3, 2017
 *		  Time : 7:59:14 PM
 *
 */

using namespace std;

#include <iostream>


string is_identical(int* a, int* b, int n)
{
	for(int i=0;i<n;++i)
		for(int j=0;j<n;++j)
			if(*(a+(i*n)+j) != *(b+(i*n)+j))
				return "No";

	return "Yes";
}

void get_input(int* matrix, int n)
{
	for(int i=0;i<n;++i)
		for(int j=0;j<n;++j)
			cin >> *(matrix+(i*n)+j);
}

int main()
{
	int testcases;
	cin >> testcases;

	int N;

	while(testcases--)
	{
		cin >> N;

		int A[N][N];
		int B[N][N];
		
		get_input(A[0], N);
		get_input(B[0], N);

		cout << is_identical(A[0], B[0], N) << endl;
	}

	return 0;
}
