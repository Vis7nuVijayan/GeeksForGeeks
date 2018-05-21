/*
 * Mean
 *
 *		Author : Vishnu Vijayan
 *		  Date : 10-Jan-2017
 *		  Time : 11:21:09 AM
 *
 */

using namespace std;

#include<iostream>


int getMean(int n)
{
	int temp;
	int sum = 0;
	for(int i=0;i<n;++i)
	{
		cin >> temp;
		sum += temp;
	}

	return sum/n;
}

int main()
{
	int test_cases;
	cin >> test_cases;
	
	while(test_cases--)
	{
		int N;
		cin >> N;
		
		cout << getMean(N) << endl;
	}

	return 0;
}
