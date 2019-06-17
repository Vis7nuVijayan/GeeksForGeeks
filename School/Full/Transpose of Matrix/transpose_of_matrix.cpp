/*
 * Transpose of Matrix
 *
 *		Author : Vishnu Vijayan
 *		  Date : Dec 3, 2017
 *		  Time : 4:33:22 PM
 *
 */

using namespace std;

#include <iostream>


void transpose(int* matrix, int n)
{
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<n;++j)
		{
			if(i<j)
				swap(*(matrix+(i*n)+j), *(matrix+(j*n)+i));
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

		int matrix[N][N];

		for(int i=0;i<N;++i)
			for(int j=0;j<N;++j)
				cin >> matrix[i][j];

		transpose(matrix[0], N);
		
		for(int i=0;i<N;++i)
			for(int j=0;j<N;++j)
				cout << matrix[i][j] << " ";

		cout << endl;
	}

	return 0;
}
