#include<iostream>

using namespace std;

int main()
 {
	//code

	int test_cases;
	cin >> test_cases;

	while(test_cases--)
	{
		int num1, num2;
		cin >> num1 >> num2;

		cout << (num1-num2)%12 << endl;
	}

	return 0;
}
