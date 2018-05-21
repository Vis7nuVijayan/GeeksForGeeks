/*
 * Print an array in Pendulum Arrangement
 *
 *		Author : Vishnu Vijayan
 *		  Date : Dec 2, 2017
 *		  Time : 9:13:57 PM
 *
 */

using namespace std;

#include <iostream>
#include <algorithm>


int* do_arrangement(int array[], int n)
{
	int* temp = new int[n];

	int mid;

	if(n%2)
		mid = n/2;

	else
		mid = n/2 - 1;

	temp[mid] = array[0];

	int pendulum_value = 1;

	for(int i=1;i<n;++i)
	{
		if(i%2)
			temp[mid + pendulum_value] = array[i];

		else
			temp[mid - pendulum_value++] = array[i];
	}

	return temp;
}

int main()
{
	int testcases;
	cin >> testcases;

	int N;

	while(testcases--)
	{
		cin >> N;
		
		int array[N];
		for(int i=0;i<N;++i)
			cin >> array[i];

		sort(array, array+N);

		int* pendulum_array = do_arrangement(array,N);

		for(int i=0;i<N;++i)
			cout << *(pendulum_array + i) << " ";

		cout << endl;
	}

	return 0;
}
