/*
 * Decision Making
 *
 *		Author : Vishnu Vijayan
 *		  Date : Nov 29, 2017
 *		  Time : 9:51:30 PM
 *
 */

using namespace std;

#include <iostream>


string comparison(int n)
{
	if (n > 5)
		return "Greater than 5";

	else if (n < 5)
		return "Less than 5";

	else
		return "Equal to 5";
}

int main()
{
	int testcases;
	cin >> testcases;

	int N;

	while(testcases--)
	{
		cin >> N;
		
		cout << comparison(N) << endl;
	}

	return 0;
}
