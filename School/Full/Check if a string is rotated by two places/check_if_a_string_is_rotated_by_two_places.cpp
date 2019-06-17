/*
 * Check if a string is rotated by two places
 *
 *		Author : Vishnu Vijayan
 *		  Date : 09-Oct-2017
 *		  Time : 12:37:21 AM
 *
 */

using namespace std;

#include <iostream>
#include <algorithm>

int rotate_clockwise(string,string);
int rotate_anticlockwise(string,string);

int main()
{
	int testcases;
	cin >> testcases;

	while(testcases--)
	{
		string a,b;
		cin >> a >> b;

		cout << (rotate_clockwise(a,b) || rotate_anticlockwise(a,b)) << endl;
		
	}

	return 0;
}

int rotate_clockwise(string a, string b)
{
	std::rotate(b.begin(),b.begin()+1,b.end());
	if(a.compare(b))
	{
		std::rotate(b.begin(),b.begin()+1,b.end());
		if(a.compare(b))
			return 0;
	}

	return 1;
}

int rotate_anticlockwise(string a, string b)
{
	rotate(b.rbegin(),b.rbegin()+1,b.rend());
	if(a.compare(b))
	{
		rotate(b.rbegin(),b.rbegin()+1,b.rend());
		if(a.compare(b))
			return 0;
	}

	return 1;
}
