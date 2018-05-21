#include<iostream>
#include<cmath>

using namespace std;


class Point
{
	public:
		int x, y;

		Point()
		{
			int x, y;
			cin >> x >> y;

			this->x = x;
			this->y = y;
		}

		Point* getOpposite(Point* b, Point* c, Point* d)
		{
			if(this->x != b->x && this->y != b->y)
				return b;
			else if(this->x != c->x && this->y != c->y)
				return c;
			else if(this->x != d->x && this->y != d->y)
				return d;
			else
				return nullptr;
		}

		bool getEqual(Point a)
		{
			if(this->x == a.x && this->y == a.y)
				return true;
			else
				return false;
		}

		int getLength(Point a)
		{
			double X = pow(this->x - a.x,2.0);
			double Y = pow(this->y - a.y,2.0);
			return (int)sqrt(X+Y);
		}
};


int isSquare(Point a, Point b, Point c, Point opp)
{
	if(a.getLength(b) == opp.getLength(b))
	{
		if(a.getLength(c) == opp.getLength(c))
			return 1;
	}
	return 0;
}

int main()
 {
	//code

	int test_cases;
	cin >> test_cases;

	while(test_cases--)
	{
		Point a, b, c, d;

		Point* opposite = a.getOpposite(&b,&c,&d);

		if(opposite == nullptr)
			cout << 0;

		else if(opposite->getEqual(b))
			cout << (isSquare(a,c,d,b));

		else if(opposite->getEqual(c))
			cout << (isSquare(a,b,d,c));

		else
			cout <<(isSquare(a,b,c,d));

		cout << endl;
	}

	return 0;
}
