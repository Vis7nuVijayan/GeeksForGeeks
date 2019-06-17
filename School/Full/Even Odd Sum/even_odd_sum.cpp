/*
 * Even Odd Sum
 *
 *		Author : Vishnu Vijayan
 *		  Date : 21-Apr-2019
 *		  Time : 1:35:57 am
 *
 */

using namespace std;

#include <iostream>


void get_sum(int n)
{
	int temp;
	int odd_sum = 0;
	int even_sum = 0;

	for(int i=0; i<n; ++i)
	{
		cin >> temp;

		if((i&1) == 1)
			odd_sum += temp;

		else
			even_sum += temp;
	}

	cout << even_sum << endl;
	cout << odd_sum << endl;
}

int main()
{
	int test_cases;
	cin >> test_cases;
	
	while(test_cases--)
	{
		int N;
		cin >> N;

		get_sum(N);
	}

	return 0;
}
