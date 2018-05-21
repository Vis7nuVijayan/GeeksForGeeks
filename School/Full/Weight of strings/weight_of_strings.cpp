/*
 * Weight of strings
 *
 *		Author : Vishnu Vijayan
 *		  Date : 22-Mar-2018
 *		  Time : 11:15:05 PM
 *
 */

using namespace std;

#include <iostream>


long get_weight(string s)
{
	long weight = 0;

	for(char c : s)
		weight += c - 'a' + 1;

	return weight;
}

string which_weight(string s1, string s2)
{
	long weight_s1 = get_weight(s1);
	long weight_s2 = get_weight(s2);

	if(weight_s1 < weight_s2)
		return "2";

	else if(weight_s1 > weight_s2)
		return "1";

	else
		return "equal";
}

int main()
{
	int test_cases;
	cin >> test_cases;
	cin.ignore();
	
	while(test_cases--)
	{
		string s1, s2;
		getline(cin, s1);
		getline(cin, s2);
		
		cout << which_weight(s1, s2) << endl;
	}

	return 0;
}
