#include<iostream>

using namespace std;


int getLazyCaterer(int n)
{
	return (n*n+n+2)/2;
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

		cout << getLazyCaterer(N) << endl;
	}

	return 0;
}
