/*
 * Perfect Arrays
 *
 *		Author : Vishnu Vijayan
 *		  Date : 17-Mar-2018
 *		  Time : 8:48:38 PM
 *
 */

using namespace std;

#include <iostream>
#include <stack>


string is_perfect_array(int a[], int n)
{
	stack<int> s;

	for(int i=0; i<n; ++i)
		s.push(a[i]);

	int temp;
	for(int i=0; i<n; ++i)
	{
		if(s.top() != a[i])
			return "NOT PERFECT";

		s.pop();
	}

	return "PERFECT";
}

int main()
{
	int test_cases;
	cin >> test_cases;
	
	while(test_cases--)
	{
		int N;
		cin >> N;

		int a[N];
		
		for(int i=0; i<N; ++i)
			cin >> a[i];

		cout << is_perfect_array(a,N) << endl;
	}

	return 0;
}
