/*
 * Switch Case Statement
 *
 *		Author : Vishnu Vijayan
 *		  Date : Dec 1, 2017
 *		  Time : 5:07:28 PM
 *
 */

using namespace std;

#include <iostream>


string print_number(int n)
{
	switch(n)
	{
		case 1 :	return "one";
		case 2 :	return "two";
		case 3 :	return "three";
		case 4 :	return "four";
		case 5 :	return "five";
		case 6 :	return "six";
		case 7 :	return "seven";
		case 8 :	return "eight";
		case 9 :	return "nine";
		case 10 :	return "ten";
		default :	return "not in range";
	}
}

int main()
{
	int testcases;
	cin >> testcases;

	int N;

	while(testcases--)
	{
		cin >> N;
		
		cout << print_number(N) << endl;
	}

	return 0;
}
