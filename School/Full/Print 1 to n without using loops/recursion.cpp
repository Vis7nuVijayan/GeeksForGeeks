#include<iostream>

using namespace std;


void Print(int n)
{
	if(n == 0)
		return;

	Print(n-1);
	cout << n << " ";
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

		Print(N);
		cout << endl;
	}
	return 0;
}
