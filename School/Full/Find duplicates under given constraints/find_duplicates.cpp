/*
 * Find duplicates under given constraints
 *
 *		Author : Vishnu Vijayan
 *		  Date : 22-Aug-2017
 *		  Time : 6:41:58 PM
 *
 */

using namespace std;

#include <iostream>


int Duplicate_Is(int a[])
{
	int mid = 5;

	if(a[mid] == a[mid+1])
		return a[mid];

	return a[mid-1];
}

int main()
{
	int test_cases;
	cin >> test_cases;
	
	while(test_cases--)
	{
		int a[10];

		for(int i=0;i<10;++i)
			cin >> a[i];
		
		cout << Duplicate_Is(a) << endl;
	}

	return 0;
}
