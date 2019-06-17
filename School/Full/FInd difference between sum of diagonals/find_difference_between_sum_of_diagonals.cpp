/*
 * FInd difference between sum of diagonals
 *
 *		Author : Vishnu Vijayan
 *		  Date : 10-Apr-2019
 *		  Time : 9:24:01 pm
 *
 */

using namespace std;

#include <iostream>

int print_diagonal_difference(int n)
{
	int sum_primary_diagonal = 0;
	int sum_secondary_diagonal = 0;
	int temp;

	for(int i=0; i<n; ++i)
		for(int j=0; j<n; ++j)
		{
			cin >> temp;

			if(i==j)
				sum_primary_diagonal += temp;

			if(i+j == n-1)
				sum_secondary_diagonal += temp;
		}

	return abs(sum_primary_diagonal - sum_secondary_diagonal);
}

int main()
{
	int test_cases;
	cin >> test_cases;
	
	while(test_cases--)
	{
		int N;
		cin >> N;
		
		cout << print_diagonal_difference(N) << endl;
	}

	return 0;
}
