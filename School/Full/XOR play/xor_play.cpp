/*
 * XOR play
 *
 *		Author : Vishnu Vijayan
 *		  Date : 17-Oct-2017
 *		  Time : 11:01:26 AM
 *
 */

using namespace std;

#include <iostream>
#include <set>
#include <cmath>

set<int> get_divisors(int n)
{
	set<int> divisors;
	divisors.insert(1);

	for(int i=2;i<=sqrt(n);++i)
	{
		if(n%i == 0)
		{
			if(n/i != i)
				divisors.insert(n/i);

			divisors.insert(i);
		}
	}

	return divisors;
}

int main()
{
	int testcases;
	cin >> testcases;

	while(testcases--)
	{
		int N;
		cin >> N;
		
		set<int> divisors = get_divisors(N);

		int xor_value = 0;

		for(int i : divisors)
		{
			cout << i << " ";
			xor_value = xor_value xor i;
		}

		cout << endl << xor_value << endl;
	}

	return 0;
}
