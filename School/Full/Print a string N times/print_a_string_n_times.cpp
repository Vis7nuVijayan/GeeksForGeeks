/*
 * Print a string N times
 *
 *		Author : Vishnu Vijayan
 *		  Date : 20-Nov-2017
 *		  Time : 12:25:58 AM
 *
 */

using namespace std;

#include <iostream>

int main()
{
	int testcases;
	cin >> testcases;

	int N;

	while(testcases--)
	{
		cin >> N;
		
		for(int i=1;i<=N;++i)
			cout << "GeeksforGeeks" << endl;
	}

	return 0;
}
