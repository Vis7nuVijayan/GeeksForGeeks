#include<iostream>

using namespace std;


string getParity(int n)
{
	int count = 0;
	while(n > 0)
	{
		++count;
		n = n & (n-1);
	}

	if(count%2)
		return "odd";

	return "even";
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

		cout << getParity(n) << endl;
	}
	return 0;
}
