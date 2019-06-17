/*
 * Sum of diagonals
 *
 *		Author : Vishnu Vijayan
 *		  Date : 21-Apr-2019
 *		  Time : 2:12:52 pm
 *
 */

using namespace std;

#include <iostream>

void print_diagonal_sum(int n)
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

	cout << sum_primary_diagonal << " " << sum_secondary_diagonal << endl;
}

int main()
{
	int test_cases;
	cin >> test_cases;
	
	while(test_cases--)
	{
		int N;
		cin >> N;
		
		print_diagonal_sum(N);
	}

	return 0;
}
