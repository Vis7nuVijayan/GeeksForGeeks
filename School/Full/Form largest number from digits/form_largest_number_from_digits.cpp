/*
 * Form largest number from digits
 *
 *		Author : Vishnu Vijayan
 *		  Date : 14-Sep-2017
 *		  Time : 12:34:28 AM
 *
 */

using namespace std;

#include <iostream>
#include <algorithm>

int main()
{
	int test_cases;
	cin >> test_cases;
	
	while(test_cases--)
	{
		int n;
		cin >> n;

		int a[n];
		for(int i=0;i<n;++i)
			cin >> a[i];

		sort(a,a+n,greater<int>());

		for(int i : a)
			cout << i;
		
		cout << endl;
	}

	return 0;
}
