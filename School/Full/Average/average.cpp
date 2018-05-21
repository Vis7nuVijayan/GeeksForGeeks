#include<iostream>

using namespace std;


void getInput(int* c, int n)
{
	int temp, sum = 0;
	for(int i=0;i<n;++i)
	{
		cin >> temp;
		sum += temp;
		c[i] = sum;
	}
}

void printAverage(int n)
{
	int C[n];
	getInput(C, n);

	for(int i=0;i<n;++i)
		cout << C[i]/(i+1) << " ";
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

		printAverage(N);

		cout << endl;
	}
	return 0;
}
