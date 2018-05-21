#include<iostream>
#include<cmath>

using namespace std;


long getMaxDistance(int n)
{
	double distance = 0;
	for(int i=1;i<=n;++i)
		distance += 100.0/i;

	return floor(distance);
}

int main()
 {
	//code

	int test_cases;
	cin >> test_cases;

	while(test_cases--)
	{
		int N;
		cin >> N;

		cout << getMaxDistance(N) << endl;
	}

	return 0;
}
