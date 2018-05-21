/*
 * Perfect Array
 *
 *		Author : Vishnu Vijayan
 *		  Date : 17-Mar-2018
 *		  Time : 11:39:57 PM
 *
 */

using namespace std;

#include <iostream>


string is_perfect_array(int a[], int n)
{
	int current_state = 0;

	for(int i=0; i<n-1; ++i)
	{
		if((a[i] < a[i+1]) && (current_state != 0))
			return "No";

		else if((a[i] == a[i+1]) && (current_state < 2))
			current_state = 1;

		else if((a[i] == a[i+1]) && (current_state > 1))
			return "No";

		else if((a[i] > a[i+1]) && (current_state <= 2))
			current_state = 2;
	}

	return "Yes";
}

int main()
{
	int test_cases;
	cin >> test_cases;
	
	while(test_cases--)
	{
		int N;
		cin >> N;

		int array[N];
		for(int i=0; i<N; ++i)
			cin >> array[i];
		
		cout << is_perfect_array(array, N) << endl;
	}

	return 0;
}
