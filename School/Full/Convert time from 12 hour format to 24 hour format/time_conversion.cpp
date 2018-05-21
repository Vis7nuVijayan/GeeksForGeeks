/*
 * Convert time from 12 hour format to 24 hour format
 *
 *		Author : Vishnu Vijayan
 *		  Date : Dec 10, 2017
 *		  Time : 1:24:06 PM
 *
 */

using namespace std;

#include <iostream>


class Time
{
	public:
		int h;
		int m;
		int s;
		string type;

		friend istream &operator>>(istream &input, Time &time)
		{
			char temp;

			input >> time.h;
			input >> temp;

			input >> time.m;
			input >> temp;

			input >> time.s;
			getline(input, time.type);
		}
};

void print_time_string(int t)
{
	switch(t)
	{
		case 0 : cout << "00"; break;
		case 1 : cout << "01"; break;
		case 2 : cout << "02"; break;
		case 3 : cout << "03"; break;
		case 4 : cout << "04"; break;
		case 5 : cout << "05"; break;
		case 6 : cout << "06"; break;
		case 7 : cout << "07"; break;
		case 8 : cout << "08"; break;
		case 9 : cout << "09"; break;
		default : cout << t;
	}
}

void print_time(int h, int m, int s)
{
	print_time_string(h);
	cout << ":";

	print_time_string(m);
	cout << ":";

	print_time_string(s);
	cout << endl;
}

int main()
{
	int testcases;
	cin >> testcases;

	Time time;

	while(testcases--)
	{
		cin >> time;

		if(time.type.compare("AM") == 0)
		{
			if(time.h == 12)
				print_time(0, time.m, time.s);

			else
				print_time(time.h, time.m, time.s);
		}
		
		else
		{
			if(time.h == 12)
				print_time(12, time.m, time.s);

			else
				print_time(time.h+12, time.m, time.s);
		}
	}

	return 0;
}
