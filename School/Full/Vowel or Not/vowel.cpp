#include<iostream>

using namespace std;

string isVowel(char c)
{
	char vowel[] = {'a','A','e','E','i','I','o','O','u','U'};

	for(char v : vowel)
	{
		if(c == v)
			return "YES";
	}

	return "NO";
}

int main()
{
	//code
	int T;
	cin >> T;

	while(T--)
	{
		char c;
		cin >> c;

		cout << isVowel(c) << endl;
	}
	return 0;
}
