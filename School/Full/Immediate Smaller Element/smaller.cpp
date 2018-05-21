#include<iostream>

using namespace std;


void isSmaller(int* a, int n)
{
	for(int i=0;i<n-1;++i)
	{
		if(a[i] <= a[i+1])
			cout << -1;

		else
			cout << a[i+1];

		cout << " ";
	}

	cout << -1;
	cout << endl;
}

void inputArray(int *a, int n)
{
	for(int i=0;i<n;++i)
		cin >> a[i];
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

		int array[N];
		inputArray(array, N);

		isSmaller(array, N);
	}
	return 0;
}
