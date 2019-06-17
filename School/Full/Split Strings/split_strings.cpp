/*
 * Split Strings
 *
 *		Author : Vishnu Vijayan
 *		  Date : 12-Apr-2019
 *		  Time : 11:43:48 pm
 *
 */

using namespace std;

#include <iostream>

void split_string(string s)
{
	string alphabets = "";
	string numbers = "";
	string special_characters = "";

	for(int i=0; i<s.length(); ++i)
	{
		if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
			alphabets += s[i];

		else if(s[i] >= '0' && s[i] <= '9')
			numbers += s[i];

		else
			special_characters += s[i];
	}

	cout << alphabets << endl;
	cout << numbers << endl;
	cout << special_characters << endl;
}


int main()
{
	int test_cases;
	cin >> test_cases;
	
	cin.ignore();

	while(test_cases--)
	{
		string s;
		
		getline(cin, s);

		split_string(s);
	}

	return 0;
}
