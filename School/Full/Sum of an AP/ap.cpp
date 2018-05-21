#include<iostream>

using namespace std;


int sumOfAP(int n)
{
	int a,d;
	cin >> a >> d;

	int sum = (n*(2*a+(n-1)*d))/2;

	return sum;
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

		cout << sumOfAP(N) << endl;
	}
	return 0;
}
