#include<iostream>

using namespace std;


void simpleInterest(int p, int t, int r)
{
	cout << (p*t*r)/100 << endl;
}

int main()
{
	//code
	int T;
	cin >> T;

	while(T--)
	{
		int P, T, R;
		cin >> P >> T >> R;

		simpleInterest(P,T,R);
	}
	return 0;
}
