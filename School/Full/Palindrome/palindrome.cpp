#include<iostream>

using namespace std;


string isPalindrome(string s)
{
	int slen = s.length();

	if(s.length() == 1)
		return "Yes";

	for(int i=0;i<slen/2;++i)
		if(s[i] != s[slen-1-i])
			return "No";

	return "Yes";
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

		cout << isPalindrome(s) << endl;
	}

	return 0;
}
