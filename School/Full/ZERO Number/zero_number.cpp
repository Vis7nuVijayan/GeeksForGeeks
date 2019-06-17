/*
 * ZERO Number
 *
 *		Author : Vishnu Vijayan
 *		  Date : 10-Mar-2018
 *		  Time : 2:47:27 AM
 *
 */

using namespace std;

#include <iostream>

string is_zero_number(string number)
{
	if(!number[0])
		return "NO";

	for(int i=1; i<number.length(); ++i)
		if(number[i] == '0')
			return "YES";

	return "NO";
}

int main()
{
	int test_cases;
	cin >> test_cases;
	cin.ignore();

	while(test_cases--)
	{
		string number;
		getline(cin, number);
		
		cout << is_zero_number(number) << endl;
	}

	return 0;
}
