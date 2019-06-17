/*
 * Numbers with 0 as a digit
 *
 *		Author : Vishnu Vijayan
 *		  Date : Mar 7, 2018
 *		  Time : 1:24:28 PM
 *
 */

using namespace std;

#include <iostream>


int get_zero_count(int n)
{
	int count = 0;

	for(int i=1; i<=n; ++i)
	{
		int temp = i;

		while(temp)
		{
			if(!(temp%10))
			{
				++count;
				break;
			}

			temp /= 10;
		}

	}

	return count;
}

int main()
{
	int testcases;
	cin >> testcases;

	while(testcases--)
	{
		int N;
		cin >> N;
		
		cout << get_zero_count(N) << endl;
	}

	return 0;
}
