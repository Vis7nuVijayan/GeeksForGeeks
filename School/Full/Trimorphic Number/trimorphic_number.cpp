/*
 * Trimorphic Number
 *
 *		Author : Vishnu Vijayan
 *		  Date : 03-Apr-2018
 *		  Time : 9:56:38 PM
 *
 */

using namespace std;

#include <iostream>

bool is_trimorphic(int n, long long n3)
{
	while(n > 0 && n3 > 0)
	{
		if(n%10 != n3%10)
			return false;

		n /= 10;
		n3 /= 10;
	}

	return true;
}

void check_trimorphic(int n)
{
	long long n_3 = n*n*n;
cerr << n_3;
	if(is_trimorphic(n,n_3))
		cout << 1;

	else
		cout << 0;
}

int main()
{
	int test_cases;
	cin >> test_cases;
	
	while(test_cases--)
	{
		int N;
		cin >> N;
		
		check_trimorphic(N);

		cout << endl;
	}

	return 0;
}
