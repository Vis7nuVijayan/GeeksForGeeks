#include<iostream>

using namespace std;


void printText(string s, int n)
{
	int slen = s.length();

	for(int i=0;i<slen-n;++i)
		cout << s[i];
}

void printDot(int n)
{
	for(int i=0;i<n;++i)
		cout << ".";
}

void printTriangle(string s)
{
	int slen = s.size();

	for(int i=slen-1;i>=0;--i)
	{
		printDot(i);
		printText(s,i);
		cout << endl;
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
