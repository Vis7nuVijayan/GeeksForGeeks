#include<iostream>

using namespace std;


void Initialize(int m, int* a)
{
	for(int i=0;i<m;++i)
		for(int j=0;j<m;++j)
			cin >> *((a+(j*m))+i);
}

int getLeftDiagonal(int m, int* a)
{
	int sum = 0;
	for(int i=0;i<m;++i)
		sum += *((a+(i*m))+i);

	return sum;
}

int getRightDiagonal(int m, int* a)
{
	int sum = 0;
	for(int i=0;i<m;++i)
		sum += *((a+((m-i-1)*m))+i);

	return sum;
}

int main()
 {
	//code

	int test_cases;
	cin >> test_cases;

	while(test_cases--)
	{
		int M;
		cin >> M;

		int A[M][M];

		Initialize(M, A[0]);

		int left = getLeftDiagonal(M, A[0]);
		int right = getRightDiagonal(M, A[0]);

		cout << left+right << endl;
	}

	return 0;
}
