#include<iostream>
#include<set>
#include<cmath>

using namespace std;


void divisors(int n)
{
	set<int> divisors;

	divisors.insert(1);
	divisors.insert(n);

	for(int i=2; i<=sqrt(n); ++i)
	{
		if(n%i == 0)
		{
			divisors.insert(i);
			divisors.insert(n/i);
		}
	}

	for(auto i : divisors)
		cout << i << " ";
}

int main()
{
	//code
	int T;
	cin >> T;

	while(T--)
	{
		int number;
		cin >> number;

		divisors(number);

		cout << endl;
	}
	return 0;
}
