#include<iostream>

using namespace std;

int main()
{
	//code
	int no_of_testcases;
	cin >> no_of_testcases;

	while(no_of_testcases--)
	{
		int N;
		cin >> N;

		int sum = 0;
		int temp;
		for(int i=0;i<N;++i)
		{
			cin >> temp;
			sum += temp;
		}

		cout << sum << endl;
	}
	return 0;
}
