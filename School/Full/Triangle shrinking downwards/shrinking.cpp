#include<iostream>

using namespace std;


void printTriangle(string s)
{
	int slen = s.length();

	for(int i=0;i<slen;++i)
	{
		cout << s << endl;
		s[i] = '.';
	}
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

		printTriangle(s);
	}

	return 0;
}
