/*
 * G.F Series
 *
 *		Author : Vishnu Vijayan
 *		  Date : 16-May-2018
 *		  Time : 9:09:05 PM
 *
 */

using namespace std;

#include <iostream>
#include <map>


long get_gf_term(int i, map<long,long>& gf_series)
{
	if(gf_series.find(i) != gf_series.end())
		return gf_series[i];

	long term = gf_series[i-2] * gf_series[i-2] - gf_series[i-1];
	gf_series.insert(make_pair(i, term));

	return gf_series[i];
}

int main()
{
	int test_cases;
	cin >> test_cases;
	
	map<long,long> gf_series;

	gf_series.insert(make_pair(1,0));
	gf_series.insert(make_pair(2,1));

	while(test_cases--)
	{
		int N;
		cin >> N;
		
		for(int i=1;i<=N; ++i)
			cout << get_gf_term(i, gf_series) << " ";

		cout << endl;
	}

	return 0;
}
