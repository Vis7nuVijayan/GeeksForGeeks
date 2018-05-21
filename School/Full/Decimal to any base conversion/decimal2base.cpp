#include<iostream>

using namespace std;


string getNumber(int n, int b)
{
	if(n <= 0)
		return "";

	char num;

	if(n%b > 9)
		num = n%b-10+'A';
	else
		num = n%b+'0';

	return getNumber(n/b, b) + num;
}

int main()
{
	//code
	int T;
	cin >> T;

	while(T--)
	{
		int base, num;
		cin >> base >> num;

		cout << getNumber(num, base) << endl;
	}
	return 0;
}
