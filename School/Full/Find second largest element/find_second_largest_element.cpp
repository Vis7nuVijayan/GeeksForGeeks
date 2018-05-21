/*
 * Find second largest element
 *
 *		Author : Vishnu Vijayan
 *		  Date : Dec 24, 2017
 *		  Time : 4:46:40 PM
 *
 */

using namespace std;

#include <iostream>


void print_second_largest_element(int n)
{
	int largest;

	cin >> largest;

	int second_largest = largest;

	int temp;

	for(int i=2;i<=n;++i)
	{
		cin >> temp;

		if(temp > largest)
		{
			second_largest = largest;
			largest = temp;
		}

		else if((temp > second_largest && temp != largest) || largest == second_largest)
			second_largest = temp;
	}

	if(largest == second_largest)
		cout << -1;

	else
		cout << second_largest;
}

int main()
{
	int testcases;
	cin >> testcases;

	int n;

	while(testcases--)
	{
		cin >> n;

		print_second_largest_element(n);
		
		cout << endl;
	}

	return 0;
}
