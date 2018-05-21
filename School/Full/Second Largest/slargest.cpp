#include<iostream>
#include<climits>

using namespace std;


int secondLargest(int *c, int n)
{
	int first = c[0];
	int second = INT_MIN;

	for(int i=1;i<n;++i)
	{
		if(c[i] > first)
		{
			second = first;
			first = c[i];
		}

		else if(c[i] > second)
			second = c[i];
	}

	return second;
}

void getInput(int *c, int n)
{
	for(int i=0;i<n;++i)
		cin >> c[i];
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

		int C[N];
		getInput(C, N);

		cout << secondLargest(C, N) << endl;
	}
	return 0;
}
