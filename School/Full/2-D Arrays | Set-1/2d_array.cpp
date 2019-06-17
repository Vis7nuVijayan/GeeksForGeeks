/*
 * 2-D Arrays | Set-1
 *
 *		Author : Vishnu Vijayan
 *		  Date : 17-Jun-2019
 *		  Time : 8:40:45 pm
 *
 */

using namespace std;

#include <iostream>


void get_array(int* a, int n)
{
	for(int i=0; i<n; ++i)
		for(int j=0; j<n; ++j)
			cin >> *((a+(i*n))+j);

	cout << "\n";
}

void print_transpose_array(int a[], int n)
{
	for(int i=0; i<n; ++i)
		for(int j=0; j<n; ++j)
			cout << *((a+(j*n))+i) << " ";
}


int main()
{
	int test_cases;
	cin >> test_cases;
	
	while(test_cases--)
	{
		int N;
		cin >> N;

		int A[N][N];

		get_array(A[0],N);
		
		print_transpose_array(A[0], N);
	}

	return 0;
}
