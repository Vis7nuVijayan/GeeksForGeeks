/*
 * Difference between sum of odd and even digits
 *
 *		Author : Vishnu Vijayan
 *		  Date : Mar 6, 2018
 *		  Time : 11:55:59 AM
 *
 */

using namespace std;

#include <iostream>


string is_difference_equal(string number)
{
	int odd_sum = 0;
	int even_sum = 0;

	for(int i=0;i<number.length(); ++i)
	{
		if(!isdigit(number[i]))
			continue;

		if(i%2)
			odd_sum += number[i] - '0';

		else
			even_sum += number[i] - '0';
	}

	if(odd_sum-even_sum)
		return "No";

	return "Yes";
}

int main()
{
	int testcases;
	cin >> testcases;
	cin.ignore();

	while(testcases--)
	{
		string number;
		getline(cin, number);
		
		cout << is_difference_equal(number) << endl;
	}

	return 0;
}
