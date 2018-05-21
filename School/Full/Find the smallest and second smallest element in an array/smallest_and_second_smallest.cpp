/*
 * Find the smallest and second smallest element in an array
 *
 *		Author : Vishnu Vijayan
 *		  Date : Dec 24, 2017
 *		  Time : 4:14:48 PM
 *
 */

using namespace std;

#include <iostream>


void find_smallest_and_second_smallest(int n)
{
	int smallest;

	cin >> smallest;

	int second_smallest = smallest;

	int temp;

	for(int i=2;i<=n;++i)
	{
		cin >> temp;

		if(temp < smallest)
		{
			second_smallest = smallest;
			smallest = temp;
		}

		else if((temp < second_smallest && temp != smallest) || smallest == second_smallest)
			second_smallest = temp;
	}

	if(smallest == second_smallest)
		cout << -1;

	else
		cout << smallest << " " << second_smallest;
}

int main()
{
	int testcases;
	cin >> testcases;

	int n;

	while(testcases--)
	{
		cin >> n;

		find_smallest_and_second_smallest(n);
		
		cout << endl;
	}

	return 0;
}
