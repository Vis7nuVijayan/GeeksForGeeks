/*
 * Minimum number to form the sum even
 *
 *		Author : Vishnu Vijayan
 *		  Date : Mar 2, 2018
 *		  Time : 5:32:57 PM
 *
 */

using namespace std;

#include <iostream>


bool is_even(int number)
{
	return (!(number&1));
}

int main()
{
	int testcases;
	cin >> testcases;

	while(testcases--)
	{
		int n;
		cin >> n;

		int temp;
		int sum = 0;
		
		for(int i=0;i<n;++i)
		{
			cin >> temp;
			sum += temp;
		}

		if(is_even(sum))
			cout << "2\n";

		else
			cout << "1\n";
	}

	return 0;
}
