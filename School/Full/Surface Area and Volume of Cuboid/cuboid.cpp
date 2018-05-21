#include<iostream>

using namespace std;


int volume(int l, int b, int h)
{
	return l*b*h;
}

int surfaceArea(int l, int b, int h)
{
	return 2*(l*b+b*h+l*h);
}

int main()
{
	//code
	int T;
	cin >> T;

	while(T--)
	{
		int length, width, height;
		cin >> length >> width >> height;

		cout << surfaceArea(length, width, height) << " " << volume(length, width, height) << endl;
	}
	return 0;
}
