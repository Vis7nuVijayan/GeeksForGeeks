/*
 * Find nth term of series 1,3,6,15,21...
 *
 *		Author : Vishnu Vijayan
 *		  Date : 22-Mar-2018
 *		  Time : 11:27:20 PM
 *
 */

using namespace std;

#include <iostream>


long get_nth_term(int n)
{
	return (n * (n+1))/2;
}

int main()
{
	int test_cases;
	cin >> test_cases;
	
	while(test_cases--)
	{
		int n;
		cin >> n;
		
		cout << get_nth_term(n) << endl;
	}

	return 0;
}
