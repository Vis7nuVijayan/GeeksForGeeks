/*
 * The dice problem
 *
 *		Author : Vishnu Vijayan
 *		  Date : 22-Mar-2018
 *		  Time : 11:34:12 PM
 *
 */

using namespace std;

#include <iostream>


int get_opposite_face(int n)
{
	return 6 - n + 1;
}

int main()
{
	int test_cases;
	cin >> test_cases;
	
	while(test_cases--)
	{
		int N;
		cin >> N;
		
		cout << get_opposite_face(N) << endl;
	}

	return 0;
}
