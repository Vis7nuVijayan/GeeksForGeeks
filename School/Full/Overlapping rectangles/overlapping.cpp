#include<iostream>

using namespace std;


struct Rectangle
{
	int lx, ly;
	int rx, ry;
};


Rectangle Initialize()
{
	Rectangle rect;

	cin >> rect.lx >> rect.ly >> rect.rx >> rect.ry;

	return rect;
}

int isOverlapping(Rectangle rect1, Rectangle rect2)
{
	if(rect1.lx >= rect2.rx || rect2.lx >= rect1.rx)
		return 0;

	if(rect1.ly <= rect2.ry || rect2.ly <= rect2.ry)
		return 0;

	return 1;
}

int main()
 {
	//code

	int test_cases;
	cin >> test_cases;

	while(test_cases--)
	{
		Rectangle rectangle[2];

		for(int i=0;i<2;++i)
			rectangle[i] = Initialize();

		cout << isOverlapping(rectangle[0], rectangle[1]) << endl;
	}

	return 0;
}
