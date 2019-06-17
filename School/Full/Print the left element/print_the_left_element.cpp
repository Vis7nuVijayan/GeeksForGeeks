/*
 * Print the left element
 *
 *		Author : Vishnu Vijayan
 *		  Date : 17-Oct-2017
 *		  Time : 4:54:54 PM
 *
 */

using namespace std;

#include <iostream>
#include <algorithm>


int left_element(int a[], int n)
{
	sort(a,a+n,greater<int>());

	return a[n/2];
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
		
		for(int i=0;i<N;++i)
			cin >> A[i];

		cout << left_element(A,N) << endl;
	}

	return 0;
}
