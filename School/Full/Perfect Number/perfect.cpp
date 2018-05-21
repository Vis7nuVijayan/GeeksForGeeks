#include<iostream>

using namespace std;


int Factorial(int n)
{
	int fact = 1;
	for(int i=2;i<=n;++i)
		fact *= i;

	return fact;
}

string isPerfect(int n)
{
	int N = n;
	int sum = 0;

	while(n)
	{
		sum += Factorial(n%10);
		n /= 10;
	}

	if(sum == N)
		return "Perfect";

	return "Not Perfect";
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

		cout << isPerfect(N) << endl;
	}

	return 0;
}
