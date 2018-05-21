#include<iostream>

using namespace std;


long getSolution(int n)
{
	int combination = 1;
	for(int i=1;i<=2;++i)
		combination *= (n+3.0-i)/i;

	return combination;
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

		cout << getSolution(N) << endl;
	}

	return 0;
}
