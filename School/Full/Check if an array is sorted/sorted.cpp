#include<iostream>

using namespace std;


int isSorted(int n)
{
	int array[n];
	for(int i=0;i<n;++i)
		cin >> array[i];

	for(int i=0;i<n-1;++i)
		if(array[i] > array[i+1])
			return 0;

	return 1;
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

		cout << isSorted(N) << endl;
	}

	return 0;
}
