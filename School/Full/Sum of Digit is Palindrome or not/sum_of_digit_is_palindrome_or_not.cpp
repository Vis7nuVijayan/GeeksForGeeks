/*
 * Sum of Digit is Palindrome or not
 *
 *		Author : Vishnu Vijayan
 *		  Date : 18-Apr-2019
 *		  Time : 9:19:13 pm
 *
 */

using namespace std;

#include <iostream>


bool is_palindrome(int n)
{
	int temp = n;
	int reverse_n = 0;

	while(temp > 0)
	{
		reverse_n = reverse_n*10 + temp%10;
		temp /= 10;
	}

	if(reverse_n == n)
		return true;

	return false;
}

int get_sum_of_digits(int n)
{
	int sum_of_digits = 0;

	while(n > 0)
	{
		sum_of_digits += n%10;
		n /= 10;
	}

	return sum_of_digits;
}

string is_sum_of_digits_palindrome(int n)
{
	if(n < 10)
		return "YES";

	int digit_sum = get_sum_of_digits(n);

	if(digit_sum < 10)
		return "YES";

	return (is_palindrome(digit_sum)? "YES" : "NO");
}

int main()
{
	int test_cases;
	cin >> test_cases;
	
	while(test_cases--)
	{
		int N;
		cin >> N;
		
		cout << is_sum_of_digits_palindrome(N) << endl;
	}

	return 0;
}
