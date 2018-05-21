#include<iostream>

using namespace std;


void printTable(int n)
{
	for(int i=1;i<=10;++i)
		cout << n*i << " ";

	cout << endl;
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
		printTable(N);
	}
	return 0;
}
