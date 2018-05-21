/*
 * Maximum sum of hour glass
 *
 *		Author : Vishnu Vijayan
 *		  Date : 11-Oct-2017
 *		  Time : 12:35:18 PM
 *
 */

using namespace std;

#include <iostream>

int Max_Hour_Glass_Sum(int*, int, int);

int main()
{
	int testcases;
	cin >> testcases;

	while(testcases--)
	{
		int n,m;
		cin >> n >> m;
		
		int matrix[n][m];
		for(int i=0;i<n;++i)
			for(int j=0;j<m;++j)
				cin >> matrix[i][j];

		cout << Max_Hour_Glass_Sum(&matrix[0][0],n,m) << endl;
	}

	return 0;
}

int Max_Hour_Glass_Sum(int* matrix, int r, int c)
{
	int max_sum = -1;

	if(r < 3 || c < 3)
		return max_sum;

	int sum;
	for(int i=0;i<r-2;++i)
	{
		for(int j=0;j<c-2;++j)
		{
			//cout << (matrix+(i*c)+j);
			sum = *(matrix+(i*c)+j) + *(matrix+(i*c)+j+1) + *(matrix+(i*c)+j+2) + *(matrix+((i+1)*c)+j+1) + *(matrix+((i+2)*c)+j) + *(matrix+((i+2)*c)+j+1) + *(matrix+((i+2)*c)+j+2);
			max_sum = max(max_sum,sum);
		}
	}

	return max_sum;
}
