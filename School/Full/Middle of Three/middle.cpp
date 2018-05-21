#include<iostream>

using namespace std;


int Middle()
{
	int a,b,c;
	cin >> a >> b >> c;

	return (a>b)?((b>c)? b:min(a,c)) : ((a>c)? a:min(b,c));
}

int main()
 {
	//code

	int test_cases;
	cin >> test_cases;

	while(test_cases--)
	{
		cout << Middle() << endl;
	}

	return 0;
}
