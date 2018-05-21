#include<iostream>

using namespace std;

string oddeven(int n)
{
	if(n%2)
		return "Odd";

	return "Even";
}

int main()
{
	//code
	int T;
	cin >> T;

	while(T--)
	{
		int n;
		cin >> n;
		cout << oddeven(n) << endl;
	}
	return 0;
}
