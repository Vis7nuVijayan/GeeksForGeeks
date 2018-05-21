/*
 * Floyd's Triangle
 *
 *		Author : Vishnu Vijayan
 *		  Date : Dec 1, 2017
 *		  Time : 5:39:31 PM
 *
 */

using namespace std;

#include <iostream>


void floyds_triangle(int n)
{
	int value = 1;

	for(int i=1;i<=n;++i)
	{
		for(int j=1;j<=i;++j)
			cout << value++ << " ";

		cout << endl;
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
		
		floyds_triangle(N);
	}

	return 0;
}
