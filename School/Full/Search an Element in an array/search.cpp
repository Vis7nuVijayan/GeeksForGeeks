#include<iostream>

using namespace std;


int search(int arr[], int size)
{
	int x;
	cin >> x;

	for(int i=0;i<size;++i)
	{
		if(arr[i] == x)
			return i;
	}

	return -1;
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

		int arr[N];
		for(int i=0;i<N;++i)
			cin >> arr[i];

		cout << search(arr, N) << endl;
	}
	return 0;
}
