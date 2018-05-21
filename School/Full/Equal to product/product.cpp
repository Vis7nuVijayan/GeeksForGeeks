#include<iostream>
#include<map>

using namespace std;


map<double,int> populateMap(int n)
{
	map<double,int> hm;
	int temp;

	for(int i=0;i<n;++i)
	{
		cin >> temp;
		hm.insert(make_pair(temp, temp));
	}

	return hm;
}

string isEqualProduct(int n, double p)
{
	map<double,int> hm = populateMap(n);

	for(auto &pair : hm)
		if(hm.find((p/pair.second)) != hm.end())
			return "Yes";

	return "No";
}

int main()
 {
	//code

	int test_cases;
	cin >> test_cases;

	while(test_cases--)
	{
		int N;
		double p;
		cin >> N >> p;

		cout << isEqualProduct(N,p) << endl;
	}

	return 0;
}
