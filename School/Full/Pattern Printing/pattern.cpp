#include<iostream>

using namespace std;


void printStars(int n)
{
	for(int i=1;i<=n;++i)
		cout << "*";

	cout << " ";
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

		for(int i=1;i<=N;++i)
			printStars(i);

		cout << endl;
	}
	return 0;
}
