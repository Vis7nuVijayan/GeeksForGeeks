#include<iostream>

using namespace std;


string isPowerOf2(int x)
{
	if((x&(x-1)) == 0)
		return "True";

	return "False";
}

int main()
 {
	//code

	int test_cases;
	cin >> test_cases;

	while(test_cases--)
	{
		int x;
		cin >> x;

		cout << isPowerOf2(x) << endl;
	}

	return 0;
}
