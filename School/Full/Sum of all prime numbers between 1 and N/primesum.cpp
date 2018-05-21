#include<iostream>
#include<cstring>

using namespace std;

long primeSum(int n)
{
	bool prime[n+1];

	memset(prime, true, sizeof(prime));

	for(int i=2;i*i<=n;++i)
	{
		if(prime[i])
			for(int j=i*i;j<=n;j+=i)
				prime[j] = false;
	}

	long sum = 0;
	for(int i=2;i<=n;++i)
		if(prime[i])
			sum += i;

	return sum;
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

		cout <<primeSum(N) << endl;
	}

	return 0;
}
