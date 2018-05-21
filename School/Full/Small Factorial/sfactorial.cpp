#include<iostream>

using namespace std;


long factorial(int n)
{
	long fact = 1;
	for(long i=2;i<=n;++i)
		fact = fact*i;

	return fact;
}

int main()
{
	//code
	int T;
	cin >> T;

	while(T--)
	{
		int N;
		cin >> N;

		cout << factorial(N) << endl;
	}
	return 0;
}
