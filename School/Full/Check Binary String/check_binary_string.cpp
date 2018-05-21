/*
 * Check Binary String
 *
 *		Author : Vishnu Vijayan
 *		  Date : Jan 10, 2018
 *		  Time : 8:32:39 PM
 *
 */

using namespace std;

#include <iostream>


string is_binary_string(string str)
{
	int current_state = 0;

	for(int i=0; i<str.length(); ++i)
	{
		if(current_state == 0 && str[i] == '1')
			current_state = 1;

		else if(current_state == 1 && str[i] == '0')
			current_state = 2;

		else if(current_state == 2 && str[i] == '1')
			return "INVALID\n";
	}

	return "VALID\n";
}

int main()
{
	int testcases;
	cin >> testcases;

	cin.ignore();

	string binary_string;

	while(testcases--)
	{
		getline(cin, binary_string);
		
		cout << is_binary_string(binary_string);
	}

	return 0;
}
