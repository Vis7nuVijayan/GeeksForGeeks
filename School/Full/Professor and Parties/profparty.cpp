/*
 * Professor and Parties
 *
 *		Author : Vishnu Vijayan
 *		  Date : 10-Jan-2017
 *		  Time : 11:50:34 AM
 *
 */

using namespace std;

#include <iostream>
#include <set>

string whoParty(int n)
{
	set<int> robes;
	int temp;
	for(int i=0;i<n;++i)
	{
		cin >> temp;
		robes.insert(temp);
	}

	if(robes.size() == n)
		return "GIRLS";

	return "BOYS";
}

int main()
{
	int test_cases;
	cin >> test_cases;
	
	while(test_cases--)
	{
		int N;
		cin >> N;
		
		cout << whoParty(N) << endl;
	}

	return 0;
}
