/*
 * Addition of two square matrices
 *
 *		Author : Vishnu Vijayan
 *		  Date : Dec 5, 2017
 *		  Time : 5:41:08 PM
 *
 */

using namespace std;

#include <iostream>


int** add_matrix(int* matrix_1, int* matrix_2, int n)
{
	int** result;

	result = new int* [n];
	for(int i=0;i<n;++i)
	{
		result[i] = new int[n];

		for(int j=0;j<n;++j)
			result[i][j] = *(matrix_1+(i*n)+j) + *(matrix_2+(i*n)+j);
	}

	return result;
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
		
		int matrix_1[N][N];
		get_input(matrix_1[0], N);

		int matrix_2[N][N];
		get_input(matrix_2[0], N);

		int** result = add_matrix(matrix_1[0], matrix_2[0], N);

		for(int i=0;i<N;++i)
			for(int j=0;j<N;++j)
				cout << result[i][j] << " ";

		cout << endl;
	}

	return 0;
}
