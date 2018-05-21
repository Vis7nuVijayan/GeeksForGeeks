#include<iostream>

using namespace std;

int alone(int N)
{
	int temp, sum = 0;
	for(int i=0;i<N;++i)
	{
		cin >> temp;
		sum ^= temp;
	}

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
		cout << alone(N) << endl;
	}
	return 0;
}
