/*
 * Swap kth elements
 *
 *		Author : Vishnu Vijayan
 *		  Date : 21-Apr-2019
 *		  Time : 2:45:23 pm
 *
 */

using namespace std;

#include <iostream>


void swap(int* a, int* b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void get_input(int* a, int n)
{
	for(int i=0; i<n; ++i)
		cin >> *(a+i);
}

int main()
{
	int test_cases;
	cin >> test_cases;
	
	while(test_cases--)
	{
		int N;
		cin >> N;
		
		int K;
		cin >> K;

		int A[N];
		get_input(A, N);

		swap((A+K-1), (A+N-K));

		for(int a : A)
			cout << a << " ";

		cout << endl;
	}

	return 0;
}
