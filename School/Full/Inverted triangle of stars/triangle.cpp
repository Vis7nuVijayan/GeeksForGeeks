#include<iostream>

using namespace std;


void printStar(int n)
{
	for(int i=0;i<n;++i)
		cout << "*";
}

void printSpace(int n)
{
	for(int i=0;i<n;++i)
		cout << " ";
}

void printTriangle(int n)
{
	for(int i=0;i<n;++i)
	{
		printSpace(i);
		printStar(2*(n-i)-1);
		printSpace(i);
	}
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

		printTriangle(N);

		cout << endl;
	}

	return 0;
}
