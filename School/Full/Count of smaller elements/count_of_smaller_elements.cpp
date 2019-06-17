/*
 * Count of smaller elements
 *
 *		Author : Vishnu Vijayan
 *		  Date : 14-Apr-2019
 *		  Time : 11:53:05 am
 *
 */

using namespace std;

#include <iostream>

void get_input(int* a, int n)
{
	for(int i=0;i<n; ++i)
		cin >> *(a+i);
}

int get_count(int* a, int n, int x)
{
	for(int i=0;i<n; ++i)
		if(*(a+i) > x)
			return i;

	return n;
}

int main()
{
	int test_cases;
	cin >> test_cases;
	
	while(test_cases--)
	{
		int N;
		cin >> N;

		int A[N];
		
		get_input(A,N);

		int X;
		cin >> X;

		cout <<get_count(A,N,X) << endl;
	}

	return 0;
}
