#include<iostream>
#include<algorithm>

using namespace std;


void getArrayInput(int* a, int n)
{
	for(int i=0;i<n;++i)
		cin >> *(a+i);
}

long getSum(int a[], int b[], int n)
{
	long sum = 0;

	for(int i=0;i<n;++i)
		sum += a[i]*b[i];

	return sum;
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

		int A[N], B[N];

		getArrayInput(A, N);
		sort(A, A+N);

		getArrayInput(B, N);
		sort(B, B+N);

		cout << getSum(A,B,N) << endl;
	}

	return 0;
}
