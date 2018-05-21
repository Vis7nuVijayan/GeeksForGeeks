#include<iostream>

using namespace std;


int circle_area(int r)
{
	return 3.14*r*r;
}

int triangle_area(int b, int p)
{
	return b*p*0.5;
}

int rectangle_area(int l, int b)
{
	return l*b;
}

int main()
{
	//code
	int T;
	cin >> T;

	while(T--)
	{
		int length, breadth;
		cin >> length >> breadth;
		cout << rectangle_area(length, breadth) << " ";

		int base, perpendicular;
		cin >> base >> perpendicular;
		cout << triangle_area(base, perpendicular) << " ";

		int radius;
		cin >> radius;
		cout << circle_area(radius) << endl;
	}
	return 0;
}
