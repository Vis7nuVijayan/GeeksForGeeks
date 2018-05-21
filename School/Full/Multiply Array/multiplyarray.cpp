/*
 * Multiply Array
 *
 *		Author : Vishnu Vijayan
 *		  Date : 10-Jan-2017
 *		  Time : 11:40:06 AM
 *
 */

using namespace std;

#include<iostream>


long Multiply(int n)
{
	long mult = 1;
	int temp;
	for(int i=0;i<n;++i)
	{
		cin >> temp;
		mult *= temp;
	}

	return mult;
}

int main()
{
	int test_cases;
	cin >> test_cases;
	
	while(test_cases--)
	{
		int N;
		cin >> N;
		
		cout << Multiply(N) << endl;
	}

	return 0;
}
