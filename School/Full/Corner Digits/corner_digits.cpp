/*
 * Corner Digits
 *
 *		Author : Vishnu Vijayan
 *		  Date : Dec 16, 2017
 *		  Time : 9:56:38 PM
 *
 */

using namespace std;

#include <iostream>

int main()
{
	int testcases;
	cin >> testcases;

	cin.ignore();

	string number;

	while(testcases--)
	{
		getline(cin, number);
		
		cout << number[0] << " " << number[number.length()-1] << endl;
	}

	return 0;
}
