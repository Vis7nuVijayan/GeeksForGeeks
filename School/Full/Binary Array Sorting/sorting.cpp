#include<iostream>

using namespace std;


void Print1s(int c)
{
	for(int i=0;i<c;++i)
		cout << 1 << " ";
}

void PrintOs(int n, int c)
{
	for(int i=0;i<n-c;++i)
		cout << 0 << " ";
}

int countNoOf1(int n)
{
	int temp, count = 0;
	for(int i=0;i<n;++i)
	{
		cin >> temp;

		if(temp)
			++count;
	}

	return count;
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

		int count = countNoOf1(N);

		PrintOs(N, count);
		Print1s(count);

		cout << endl;
	}
	return 0;
}
