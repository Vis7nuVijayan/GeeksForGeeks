#include<iostream>
#include<cmath>

using namespace std;


int useMinus(int a, int b, int c)
{
	int desc = b*b-4*a*c;
	double sq = sqrt(desc);

	return floor((-b-sq)/(2.0*a));
}

int usePlus(int a, int b, int c)
{
	int desc = b*b-4*a*c;
	double sq = sqrt(desc);

	return floor((-b+sq)/(2.0*a));
}

int main()
 {
	//code

	int test_cases;
	cin >> test_cases;

	while(test_cases--)
	{
		int a, b, c;
		cin >> a >> b >> c;

		if(a == 0)
			cout << "Invalid";

		else if(b*b-4*a*c < 0)
			cout << "Imaginary";

		else
		{
			int root_1 = usePlus(a,b,c);
			int root_2 = useMinus(a,b,c);

			if(root_1 > root_2)
				cout << root_1 << " " << root_2;

			else
				cout << root_2 << " " << root_1;
		}

		cout << endl;
	}

	return 0;
}
