#include<iostream>

using namespace std;


void SmallerLarger(int n, int x)
{
	int temp;
	int smaller_count = 0;
	int larger_count = 0;
	int same_count = 0;

	for(int i=0;i<n;++i)
	{
		cin >> temp;

		if(temp < x)
			++smaller_count;

		else if (temp > x)
			++larger_count;

		else
			++same_count;
	}

	cout << smaller_count+same_count << " " << larger_count+same_count << endl;
}

int main()
{
	//code
	int T;
	cin >> T;

	while(T--)
	{
		int N, X;
		cin >> N >> X;

		SmallerLarger(N, X);
	}
	return 0;
}
