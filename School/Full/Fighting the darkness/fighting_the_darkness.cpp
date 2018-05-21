/*
 * Fighting the darkness
 *
 *		Author : Vishnu Vijayan
 *		  Date : Jan 14, 2018
 *		  Time : 4:31:02 PM
 *
 */

using namespace std;

#include <iostream>


int get_maximum(int n)
{
	int value;
	cin >> value;

	int max_value = value;

	for(int i=1; i<n; ++i)
	{
		cin >> value;

		max_value = max(max_value, value);
	}

	return max_value;
}

int main()
{
	int testcases;
	cin >> testcases;

	int N;

	while(testcases--)
	{
		cin >> N;
		
		cout << get_maximum(N) << endl;
	}

	return 0;
}
