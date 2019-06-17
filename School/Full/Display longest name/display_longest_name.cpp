/*
 * Display longest name
 *
 *		Author : Vishnu Vijayan
 *		  Date : Nov 29, 2017
 *		  Time : 7:49:07 PM
 *
 */

using namespace std;

#include <iostream>


string get_longest_string(int n)
{
	string longest_string = "";
	string temp;

	for(int i=1;i<=n;++i)
	{
		getline(cin,temp);

		if(temp.length() > longest_string.length())
			longest_string = temp;
	}

	return longest_string;
}

int main()
{
	int testcases;
	cin >> testcases;

	while(testcases--)
	{
		int N;
		cin >> N;
		cin.ignore();
		
		cout << get_longest_string(N) << endl;
	}

	return 0;
}
