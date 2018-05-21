/*
 * Distance between 2 points
 *
 *		Author : Vishnu Vijayan
 *		  Date : 20-Nov-2017
 *		  Time : 12:37:26 AM
 *
 */

using namespace std;

#include <iostream>
#include <cmath>

class Point
{
	public:
		int x,y;
		friend istream& operator>>(istream &in, Point &p);
};

istream& operator>>(istream &in, Point &p)
{
	in >> p.x;
	in >> p.y;

	return in;
}


long distance_between_points(Point p1, Point p2)
{
	double x = abs(p1.x - p2.x);
	x *= x;

	double y = abs(p1.y - p2.y);
	y *= y;

	double sqrt_value = sqrt(x+y);

	return round(sqrt_value);
}


int main()
{
	int testcases;
	cin >> testcases;

	while(testcases--)
	{
		Point p1, p2;
		cin >> p1 >> p2;

		cout << distance_between_points(p1, p2) << endl;
	}

	return 0;
}
