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
		int a,b,c;
		cin >> a >> b >> c;

		cout << max(a,max(b,c)) << endl;
	}
	return 0;
}
