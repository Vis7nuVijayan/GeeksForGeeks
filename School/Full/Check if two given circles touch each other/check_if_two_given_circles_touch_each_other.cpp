/*
 * Check if two given circles touch each other
 *
 *		Author : Vishnu Vijayan
 *		  Date : 17-Jun-2019
 *		  Time : 9:06:02 pm
 *
 */

using namespace std;

#include <iostream>
#include <cmath>

int distance_between_centers(int x1, int y1,int x2, int y2)
{
	int X2 = x1-x2;
	int Y2 = y1-y2;
	return sqrt(X2*X2 + Y2*Y2);
}

int is_touching(int x1, int y1, int x2, int y2, int r1, int r2)
{
	int c1c2 = distance_between_centers(x1, y1, x2, y2);

	if(c1c2 > r1+r2)
		return 0;

	return 1;
}

int main()
{
	int test_cases;
	cin >> test_cases;
	
	while(test_cases--)
	{
		int X1, X2, Y1, Y2, R1, R2;
		
		cin >> X1 >> Y1 >> X2 >> Y2 >> R1 >> R2;

		cout << is_touching(X1, Y1, X2, Y2, R1, R2) << endl;
	}

	return 0;
}
