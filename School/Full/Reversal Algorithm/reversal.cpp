#include<iostream>

using namespace std;


void Print(int b[], int n)
{
	for(int i=0;i<n;++i)
		cout << b[i] << " ";

	cout << endl;
}

int main()
 {
	//code

	int test_cases;
	cin >> test_cases;

	while(test_cases--)
	{
		int N;
		cin >> N;

		int A[N];
		for(int i=0;i<N;++i)
			cin >> A[i];

		int d;
		cin >> d;

		int B[N];
		for(int i=0; i<N;++i)
		{
			if(i-d < 0)
				B[N+(i-d)] = A[i];
			else
				B[(i-d)] = A[i];
		}

		Print(B, N);
	}

	return 0;
}
