#include<iostream>

using namespace std;


int XORGate(int n)
{
	int temp;
	int count = 0;

	for(int i=0;i<n;++i)
	{
		cin >> temp;
		if(temp)
			++count;
	}

	if(count & 1)
		return 1;

	return 0;
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

		cout << XORGate(N) << endl;
	}

	return 0;
}
