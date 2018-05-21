/*
 * Mind Game
 *
 *		Author : Vishnu Vijayan
 *		  Date : 10-Mar-2018
 *		  Time : 10:54:29 AM
 *
 */

using namespace std;

#include <iostream>


int final_answer(int k)
{
	return k/2;
}

int main()
{
	int test_cases;
	cin >> test_cases;

	while(test_cases--)
	{
		int K;
		cin >> K;
		
		cout << final_answer(K) << endl;
	}

	return 0;
}
