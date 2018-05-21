#include<iostream>
#include<cmath>

using namespace std;


void compoundInterest(int p, int t, int n, int r)
{
	double t1 = 1.0+(r*1.0)/(n*100);
	double t2 = pow(t1,n*t);
	double ci = p*t2;

	cout << floor(ci) << endl;
}

int main()
{
	//code
	int T;
	cin >> T;

	while(T--)
	{
		int P, T, N, R;
		cin >> P >> T >> N >> R;

		compoundInterest(P,T,N,R);
	}
	return 0;
}
