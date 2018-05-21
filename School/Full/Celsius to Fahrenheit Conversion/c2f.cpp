#include<iostream>

using namespace std;

int c2f(int c)
{
	return (9.0/5) * c + 32;
}

int main()
{
	//code
	int T;
	cin >> T;

	while(T--)
	{
		int C;
		cin >> C;

		cout << c2f(C) << endl;
	}
	return 0;
}
