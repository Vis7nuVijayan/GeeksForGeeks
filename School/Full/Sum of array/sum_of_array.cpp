/*
 * Sum of array
 *
 *		Author : Vishnu Vijayan
 *		  Date : Nov 30, 2017
 *		  Time : 12:41:51 AM
 *
 */

using namespace std;

#include <iostream>


int sum(int n)
{
	int value;
	int sum = 0;

	for(int i=1;i<=n;++i)
	{
		cin >> value;
		sum += value;
	}

	return sum;
}

int main()
{
	int testcases;
	cin >> testcases;

	int N;

	while(testcases--)
	{
		cin >> N;
		
		cout << sum(N) << endl;
	}

	return 0;
}
