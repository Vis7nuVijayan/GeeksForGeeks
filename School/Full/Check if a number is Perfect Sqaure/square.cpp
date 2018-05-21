#include<iostream>
#include<cmath>

using namespace std;

int isPerfect(int n)
{
	int root = sqrt(n);

	if(root*root == n)
		return 1;

	return 0;
}

int main()
{
	//code
	int T;
	cin >> T;

	while(T--)
	{
		int number;
		cin >> number;

		cout << isPerfect(number) << endl;
	}
	return 0;
}
