#include<iostream>
#include<algorithm>

using namespace std;


string getBinaryRep(int n)
{
	string s;

	for(int i=13;i>=0;--i)
	{
		if((n & (1 << i)) == 0)
			s.push_back('0');

		else
			s.push_back('1');
	}

	return s;
}

int main()
 {
	//code

	int test_cases;
	cin >> test_cases;

	while(test_cases--)
	{
		int N;
		cin >> N;

		cout << getBinaryRep(N) << endl;
	}

	return 0;
}
