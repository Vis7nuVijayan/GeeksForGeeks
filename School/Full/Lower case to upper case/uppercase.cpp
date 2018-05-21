#include<iostream>

using namespace std;


void printUppercase(string s)
{
	for(char c : s)
		cout << (char)toupper(c);
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

		printUppercase(s);

		cout << endl;
	}

	return 0;
}
