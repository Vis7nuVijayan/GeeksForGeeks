/*
 * Perfect Square String
 *
 *		Author : Vishnu Vijayan
 *		  Date : 17-May-2018
 *		  Time : 12:08:12 AM
 *
 */

using namespace std;

#include <iostream>
#include <cmath>

int is_perfect_square(long number)
{
	long number_sqrt = sqrt(number);
	if((double)number_sqrt == sqrt(number))
		return 1;

	return 0;
}

long get_ascii_sum(string s)
{
	long sum = 0;

	for(char c : s)
		sum += (int)c;

	return sum;
}

int main()
{
	int test_cases;
	cin >> test_cases;
	cin.ignore();
	
	while(test_cases--)
	{
		string s;
		getline(cin, s);
		
		long ascii_sum = get_ascii_sum(s);

		cout << is_perfect_square(ascii_sum) << endl;
	}

	return 0;
}
