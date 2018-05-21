/*
 * Combinational Logic
 *
 *		Author : Vishnu Vijayan
 *		  Date : 10-Jan-2017
 *		  Time : 10:57:47 AM
 *
 */

using namespace std;

#include<iostream>


int negation(int n)
{
	return (~n & 1);
}

int combinationalLogic(int a, int b, int c, int d, int e, int f)
{
	return (negation(a)*b | c*d | e*negation(f));
}

int main()
{
	int test_cases;
	cin >> test_cases;
	
	while(test_cases--)
	{
		int A, B, C, D, E, F;
		cin >> A >> B >> C >> D >> E >> F;
		
		cout << combinationalLogic(A,B,C,D,E,F) << endl;
	}

	return 0;
}
