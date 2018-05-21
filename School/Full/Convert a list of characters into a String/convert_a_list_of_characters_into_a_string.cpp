/*
 * Convert a list of characters into a String
 *
 *		Author : Vishnu Vijayan
 *		  Date : 18-Mar-2018
 *		  Time : 7:59:29 PM
 *
 */

using namespace std;

#include <iostream>


int main()
{
	int test_cases;
	cin >> test_cases;
	
	while(test_cases--)
	{
		int N;
		cin >> N;

		char array[N];
		char temp;

		for(int i=0; i<N; ++i)
		{
			cin >> array[i];
			cout << array[i];
		}

		cout << endl;
	}

	return 0;
}
