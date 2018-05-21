#include<iostream>
#include<cmath>

using namespace std;


double sumOfGP(int n)
{
	int a,r;
	cin >> a >> r;

	double sum = 0;

	if(r > 1)
		sum = a*(pow(r,n)-1)/(r-1);

	else if(r < 1)
		sum = a*(1-pow(r,n))/(1-r);

	else
		sum = n*a;

	return sum;
}

int main()
{
	//code
	int T;
	cin >> T;

	while(T--)
	{
		int N;
		cin >> N;

		cout << fixed << sumOfGP(N) << endl;
	}
	return 0;
}
