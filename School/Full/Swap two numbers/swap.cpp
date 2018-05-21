#include<iostream>

using namespace std;


void swap(int *a, int *b)
{
	*a = *a^*b;
	*b = *a^*b;
	*a = *a^*b;
}

int main()
{
	//code
	int T;
	cin >> T;

	while(T--)
	{
		int a,b;
		cin >> a >> b;

		swap(&a,&b);
		cout << a << " " << b << endl;
	}
	return 0;
}
