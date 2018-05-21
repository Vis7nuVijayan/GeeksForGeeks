#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	//code
	int T;
	cin >> T;

	while(T--)
	{
		long a,b,c;
		cin >> a >> b;

		c = pow(a,b);
		cout << c << endl;
	}
	return 0;
}
