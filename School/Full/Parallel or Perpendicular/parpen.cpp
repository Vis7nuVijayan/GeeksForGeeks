#include<iostream>

using namespace std;


struct Vector
{
	int i;
	int j;
	int k;
};

Vector getVector()
{
	Vector v;
	cin >> v.i >> v.j >> v.k;

	return v;
}

int dotProduct(Vector v1, Vector v2)
{
	int sum = v1.i*v2.i + v1.j*v2.j + v1.k*v2.k;
	return sum;
}

Vector crossProduct(Vector v1, Vector v2)
{
	Vector v3;

	v3.i = v1.j*v2.k - v1.k*v2.j;
	v3.j = -(v1.i*v2.k - v1.k*v2.i);
	v3.k = v1.i*v2.j - v1.j*v2.i;

	return v3;
}

int main()
 {
	//code

	int test_cases;
	cin >> test_cases;

	while(test_cases--)
	{
		Vector v1, v2;
		v1 = getVector();
		v2 = getVector();

		if(dotProduct(v1, v2) == 0)
			cout << 2;

		else
		{
			Vector v3 = crossProduct(v1, v2);

			if(dotProduct(v3, v3) == 0)
				cout << 1;

			else
				cout << 0;
		}

		cout << endl;
	}

	return 0;
}
