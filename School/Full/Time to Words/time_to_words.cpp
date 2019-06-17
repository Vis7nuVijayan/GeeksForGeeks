/*
 * Time to Words
 *
 *		Author : Vishnu Vijayan
 *		  Date : Dec 9, 2017
 *		  Time : 8:37:44 PM
 *
 */

using namespace std;

#include <iostream>


void print_hour(int h)
{
	switch(h)
	{
		case 1 : cout << "one"; break;
		case 2 : cout << "two"; break;
		case 3 : cout << "three"; break;
		case 4 : cout << "four"; break;
		case 5 : cout << "five"; break;
		case 6 : cout << "six"; break;
		case 7 : cout << "seven"; break;
		case 8 : cout << "eight"; break;
		case 9 : cout << "nine"; break;
		case 10 : cout << "ten"; break;
		case 11 : cout << "eleven"; break;
		case 12 : cout << "twelve"; break;
	}
}

void print_minutes(int m)
{
	switch(m)
	{
		case 1 : cout << "one minute"; break;
		case 2 : cout << "two minutes"; break;
		case 3 : cout << "three minutes"; break;
		case 4 : cout << "four minutes"; break;
		case 5 : cout << "five minutes"; break;
		case 6 : cout << "six minutes"; break;
		case 7 : cout << "seven minutes"; break;
		case 8 : cout << "eight minutes"; break;
		case 9 : cout << "nine minutes"; break;
		case 10 : cout << "ten minutes"; break;
		case 11 : cout << "eleven minutes"; break;
		case 12 : cout << "twelve minutes"; break;
		case 13 : cout << "thirteen minutes"; break;
		case 14 : cout << "fourteen minutes"; break;
		case 15 : cout << "quarter"; break;
		case 16 : cout << "sixteen minutes"; break;
		case 17 : cout << "seventeen minutes"; break;
		case 18 : cout << "eighteen minutes"; break;
		case 19 : cout << "nineteen minutes"; break;
		case 20 : cout << "twenty minutes"; break;
		case 21 : cout << "twenty one minutes"; break;
		case 22 : cout << "twenty two minutes"; break;
		case 23 : cout << "twenty three minutes"; break;
		case 24 : cout << "twenty four minutes"; break;
		case 25 : cout << "twenty five minutes"; break;
		case 26 : cout << "twenty six minutes"; break;
		case 27 : cout << "twenty seven minutes"; break;
		case 28 : cout << "twenty eight minutes"; break;
		case 29 : cout << "twenty nine minutes"; break;
		case 30 : cout << "half"; break;
	}
}

int main()
{
	int testcases;
	cin >> testcases;

	int h, m;

	while(testcases--)
	{
		cin >> h >> m;
		
		if(m == 0)
		{
			print_hour(h);
			cout << " o' clock";
		}

		else if(m <= 30)
		{
			print_minutes(m);
			cout << " past ";
			print_hour(h);
		}

		else
		{
			print_minutes(60-m);
			cout << " to ";
			print_hour(h+1);
		}

		cout << endl;
	}

	return 0;
}
