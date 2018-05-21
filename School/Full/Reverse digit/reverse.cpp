#include<iostream>

using namespace std;


void reverse(int n)
{
	if(n == 0)
		return;

	cout << n%10;
	reverse(n/10);

	return;
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

		reverse(N);

		cout << endl;
	}
	return 0;
}
