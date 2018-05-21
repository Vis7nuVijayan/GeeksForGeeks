#include<iostream>
#include<cmath>

using namespace std;


int isPower(int x, int y)
{
	int power = floor(log(y)/log(x));

	if(pow(x,power) == y)
		return 1;

	return 0;
}

int main()
 {
	//code

	int test_cases;
	cin >> test_cases;

	while(test_cases--)
	{
		int x, y;
		cin >> x >> y;

		cout << isPower(x,y) << endl;
	}

	return 0;
}
