/*
 * Composite Series
 *
 *		Author : Vishnu Vijayan
 *		  Date : 10-Jan-2017
 *		  Time : 11:24:42 AM
 *
 */

using namespace std;

#include <iostream>
#include <algorithm>

void Initialize(bool prime[], int n)
{
	for(int i=2;i*i<=n;++i)
	{
		if(prime[i])
			for(int j=i*i;j<=n; j+=i)
				prime[j] = false;
	}
}

void Print(bool prime[], int n)
{
	for(int i=2;i<=n;++i)
		if(!prime[i])
			cout << i << " ";
}

void getCompositeSeries(int n)
{
	bool prime[n+1];
	fill(prime,prime+n+1, true);

	Initialize(prime, n);

	Print(prime, n);

	cout << endl;
}

int main()
{
	int test_cases;
	cin >> test_cases;
	
	while(test_cases--)
	{
		int N;
		cin >> N;
		
		getCompositeSeries(N);
	}

	return 0;
}
