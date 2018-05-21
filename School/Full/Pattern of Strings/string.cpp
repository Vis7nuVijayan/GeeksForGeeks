#include<iostream>

using namespace std;


void print(string s, int i)
{
	cout << s << endl;
}

int main()
 {
	//code
	int test_cases;
	cin >> test_cases;

	while(test_cases--)
	{
		string s;
		cin >> s;

		int slen = s.length();

		for(int i=slen;i>=1;--i)
		{
			s[i] = '\0';
			print(s,i);
		}
	}

	return 0;
}
