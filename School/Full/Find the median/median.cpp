#include<iostream>
#include<algorithm>

using namespace std;


void getInput(int marks[], int n)
{
	for(int i=0;i<n;++i)
		cin >> marks[i];
}

int getMedian(int marks[], int n)
{
	if(n&1)
		return marks[n/2];

	else
		return (marks[n/2-1]+marks[n/2])/2;
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

		int marks[N];
		getInput(marks, N);

		sort(marks, marks+N);

		cout << getMedian(marks,N) << endl;
	}

	return 0;
}
