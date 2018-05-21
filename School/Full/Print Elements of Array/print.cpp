#include<iostream>

using namespace std;


void Print(int n)
{
	int temp;
	for(int i=0;i<n;++i)
	{
		cin >> temp;
		cout << temp << " ";
	}

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

		Print(N);
	}
	return 0;
}
