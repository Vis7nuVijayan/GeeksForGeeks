/*
 * Sum Triangle for given array
 *
 *		Author : Vishnu Vijayan
 *		  Date : Dec 18, 2017
 *		  Time : 8:31:57 PM
 *
 */

using namespace std;

#include <iostream>
#include <vector>


void print_final_array(vector<int> array, int n)
{
	int number = (n*(n+1))/2;

	for(int row = 1; row<=n; ++row)
	{
		number -= row;

		for(int col = 0; col<row; ++col)
		{
			cout << array[number+col] << " ";
		}
	}

	cout << endl;
}

int main()
{
	int testcases;
	cin >> testcases;

	int n;

	while(testcases--)
	{
		cin >> n;
		
		vector<int> array_1;
		vector<int> array_2;
		vector<int> final_array;

		int temp;

		for(int i=0;i<n;++i)
		{
			cin >> temp;
			array_1.push_back(temp);
		}

		while(array_1.size() != 1)
		{
			array_2.clear();

			for(int value : array_1)
				final_array.push_back(value);

			array_2 = array_1;

			array_1.clear();

			for(int i=0; i<array_2.size()-1; ++i)
				array_1.push_back(array_2[i]+array_2[i+1]);
		}

		final_array.push_back(array_1[0]);

		print_final_array(final_array, n);
	}

	return 0;
}
