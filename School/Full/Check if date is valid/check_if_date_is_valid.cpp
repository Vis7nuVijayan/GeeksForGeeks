/*
 * Check if date is valid
 *
 *		Author : Vishnu Vijayan
 *		  Date : 17-Oct-2017
 *		  Time : 4:34:03 PM
 *
 */

using namespace std;

#include <iostream>

int is_date_valid(int d, int m, int y)
{
	if(y >= 1800 && y <= 9999)
	{
		if(m >= 1 && m <= 12)
		{
			switch(m)
			{
				case 1 :
				case 3 :
				case 5 :
				case 7 :
				case 8 :
				case 10 :
				case 12 :	if(d >= 1 && d <= 31)
								return 1;

							return 0;
				case 4 :
				case 6 :
				case 9 :
				case 11 :	if(d >= 1 && d <= 30)
								return 1;

							return 0;

				case 2 :	if(m%4 == 0)
							{
								if(m%100 == 0)
								{
									if(d >= 1 && d <= 28)
										return 1;

									return 0;
								}

								if(d >= 1 && d <= 29)
									return 1;

								return 0;
							}

							if(d >= 1 && d <= 28)
								return 1;

							return 0;

			}
		}
	}

	return 0;
}

int main()
{
	int testcases;
	cin >> testcases;

	while(testcases--)
	{
		int date, month, year;
		cin >> date >> month >> year;
		
		cout << is_date_valid(date, month, year) << endl;
	}

	return 0;
}
