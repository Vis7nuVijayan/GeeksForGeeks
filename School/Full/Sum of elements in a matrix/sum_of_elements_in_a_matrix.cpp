/*
 * Sum of elements in a matrix
 *
 *		Author : Vishnu Vijayan
 *		  Date : 21-Nov-2017
 *		  Time : 10:15:15 AM
 *
 */

using namespace std;

#include <iostream>

int main()
{
	int testcases;
	cin >> testcases;

	int N,M, value;

	while(testcases--)
	{
		cin >> N >> M;

		int sum = 0;
		
		for(int i=0;i<N;++i)
		{
			for(int j=0;j<M;++j)
			{
				cin >> value;
				sum += value;
			}
		}

		cout << sum << endl;
	}

	return 0;
}
