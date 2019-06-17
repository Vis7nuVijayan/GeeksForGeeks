/*
 * Find minimum and maximum element in an array
 *
 *		Author : Vishnu Vijayan
 *		  Date : Dec 21, 2017
 *		  Time : 6:02:13 PM
 *
 */

using namespace std;

#include <iostream>

int main()
{
	int testcases;
	cin >> testcases;

	int n;

	while(testcases--)
	{
		cin >> n;

		int temp;

		cin >> temp;
		
		int min_value = temp;
		int max_value = temp;

		for(int i=1;i<n;++i)
		{
			cin >> temp;

			max_value = max(temp, max_value);
			min_value = min(temp, min_value);
		}

		cout << min_value << " " << max_value << endl;
	}

	return 0;
}
