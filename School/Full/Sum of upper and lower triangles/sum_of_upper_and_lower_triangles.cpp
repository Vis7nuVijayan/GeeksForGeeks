/*
 * Sum of upper and lower triangles
 *
 *		Author : Vishnu Vijayan
 *		  Date : 10-Mar-2018
 *		  Time : 10:08:03 AM
 *
 */

using namespace std;

#include <iostream>


void print_sum_of_upper_and_lower_triangles(int *a, int n)
{
	int upper_triangle_sum = 0;
	int lower_triangle_sum = 0;
	int diagonal_sum = 0;

	for(int i=0; i<n; ++i)
	{
		for(int j=0; j<n; ++j)
		{
			if(i < j)
				lower_triangle_sum += *(a+(i*n)+j);

			else if(i > j)
				upper_triangle_sum += *(a+(i*n)+j);

			else
				diagonal_sum += *(a+(i*n)+j);
		}
	}

	cout << lower_triangle_sum + diagonal_sum << " " << upper_triangle_sum + diagonal_sum << endl;
}

int main()
{
	int test_cases;
	cin >> test_cases;

	while(test_cases--)
	{
		int n;
		cin >> n;

		int a[n][n];

		for(int i=0; i<n; ++i)
			for(int j=0; j<n; ++j)
				cin >> a[i][j];
		
		print_sum_of_upper_and_lower_triangles(a[0], n);
	}

	return 0;
}
