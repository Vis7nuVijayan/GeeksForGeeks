/*
 * Area of a triangle
 *
 *		Author : Vishnu Vijayan
 *		  Date : Dec 24, 2017
 *		  Time : 5:05:18 PM
 *
 */

using namespace std;

#include <iostream>
#include <cmath>

struct triangle
{
	int a,b,c;
	double s;

	friend istream &operator >>(istream& in, triangle &t)
	{
		in >> t.a;
		in >> t.b;
		in >> t.c;

		t.s = (t.a+t.b+t.c)/2.0;
	}

	bool is_triangle()
	{
		if(a > b+c || b > c+a || c > a+b)
			return false;

		return true;
	}

	double get_area()
	{
		double value = s*(s-a)*(s-b)*(s-c);

		return sqrt(value);
	}
};

int main()
{
	int testcases;
	cin >> testcases;

	while(testcases--)
	{
		triangle t;

		cin >> t;
		
		if(t.is_triangle())
			printf("%.6f",t.get_area());

		else
			cout << "0.000000";

		cout << endl;
	}

	return 0;
}
