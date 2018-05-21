#include<iostream>
#include<cmath>

using namespace std;


int getDivisors3(int n)
{
	int count = 0;
	for(int i=1;i<=sqrt(n);++i)
	{
		if(n%i == 0)
		{
			if(i%3 == 0)
				++count;

			if((n/i)%3 == 0 && (n/i) != i)
				++count;
		}
	}

	return count;
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

		cout << getDivisors3(N) << endl;
	}

	return 0;
}
