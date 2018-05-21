/*
 * Missing number
 *
 *		Author : Vishnu Vijayan
 *		  Date : 10-Jan-2017
 *		  Time : 10:34:40 PM
 *
 */

using namespace std;

#include <iostream>


int getRequiredSum(int n)
{
	return (n*(n+1))/2;
}

int getActualSum(int n)
{
	int temp;
	int sum = 0;
	for(int i=0;i<n-1;++i)
	{
		cin >> temp;
		sum += temp;
	}

	return sum;
}

int main()
{
	int test_cases;
	cin >> test_cases;
	
	while(test_cases--)
	{
		int n;
		cin >> n;

		int required_sum = getRequiredSum(n);
		int actual_sum = getActualSum(n);
		
		cout << required_sum-actual_sum << endl;
	}

	return 0;
}
