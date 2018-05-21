#include<iostream>
#include<cmath>

using namespace std;

int main()
 {
	//code

	int test_cases;
	cin >> test_cases;

	while(test_cases--)
	{
		long Doors;
		cin >> Doors;

		cout << floor(sqrt(Doors)) << endl;
	}

	return 0;
}
