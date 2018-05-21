#include<iostream>

using namespace std;


string removeAlphabets(string s)
{
	string str;

	for(char c : s)
	{
		if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
			continue;

		str += c;
	}

	return str;
}

int main()
{
	//code
	int T;
	cin >> T;

	while(T--)
	{
		string s;
		cin >> s;

		cout << removeAlphabets(s) << endl;
	}
	return 0;
}
