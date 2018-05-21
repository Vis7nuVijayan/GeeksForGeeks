#include<iostream>

using namespace std;


void Complement(int n)
{
	int temp;
	for(int i=0;i<n;++i)
	{
		cin >> temp;
		if(temp)
			cout << 0;

		else
			cout << 1;

		cout << " ";
	}
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

		Complement(N);

		cout << endl;
	}

	return 0;
}
