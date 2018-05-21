#include<iostream>

using namespace std;


int count(string s)
{
	int count = 0;

	for(int i=0;i<s.size();++i)
	{
		if(s[i] >= 'a' && s[i] <= 'z')
			++count;

		if(s[i] >= 'A' && s[i] <= 'Z')
					++count;
	}

	return count;
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

		cout << count(s) << endl;
	}
	return 0;
}
