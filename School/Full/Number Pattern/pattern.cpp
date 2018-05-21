#include<iostream>

using namespace std;


void backwardPrint(int n)
{
	for(int i=n; i>=1; --i)
		cout << i;
}

void forwardPrint(int n)
{
	for(int i=1; i<=n; ++i)
		cout << i;
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

		for(int i=1; i<=N; ++i)
		{
			forwardPrint(i);
			backwardPrint(i-1);

			cout << " ";
		}

		cout << endl;
	}
	return 0;
}
