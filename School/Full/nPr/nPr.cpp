#include<iostream>

using namespace std;


long nPr(int n, int r)
{
	long p = 1;
	for(int i=1;i<=r;++i)
		p = p*n--;

	return p;
}

int main()
{
	//code
	int T;
	cin >> T;

	while(T--)
	{
		int n, r;
		cin >> n >> r;

		cout << nPr(n,r) << endl;
	}
	return 0;
}
