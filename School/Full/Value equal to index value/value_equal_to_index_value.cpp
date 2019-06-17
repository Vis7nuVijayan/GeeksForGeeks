/*
 * Value equal to index value
 *
 *		Author : Vishnu Vijayan
 *		  Date : 10-Apr-2019
 *		  Time : 12:58:27 am
 *
 */

using namespace std;

#include <iostream>

void Print_Equal_to_Index_Value(int n)
{
	int temp;
	bool isEqual = false;

	for(int i=1; i<=n; ++i)
	{
		cin >> temp;
		if(temp == i)
		{
			cout << i << " ";
			isEqual = true;
		}
	}
	if(!isEqual)
		cout << "Not Found";

	cout << "\n";
}

int main()
{
	int test_cases;
	cin >> test_cases;
	
	while(test_cases--)
	{
		int N;
		cin >> N;

		Print_Equal_to_Index_Value(N);
	}

	return 0;
}
