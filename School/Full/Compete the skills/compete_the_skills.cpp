/*
 * Compete the skills
 *
 *		Author : Vishnu Vijayan
 *		  Date : 11-Oct-2017
 *		  Time : 1:41:36 PM
 *
 */

using namespace std;

#include <iostream>
#include <vector>
#include <sstream>


void skill_values(vector<int> a, vector<int> b)
{
	int a_count = 0;
	int b_count = 0;

	for(int i=0;i<a.size();++i)
	{
		if(a[i] > b[i])
			++a_count;

		else if(a[i] < b[i])
			++b_count;
	}

	cout << a_count << " " << b_count << endl;
}

vector<int> parse_ints(string str)
{
	stringstream ss(str);

	vector<int> v;
	int i;

	while(ss >> i)
		v.push_back(i);

	return v;
}

int main()
{
	int testcases;
	cin >> testcases;
	cin.ignore();

	while(testcases--)
	{
		string str;
		getline(cin, str);
		vector<int> a = parse_ints(str);

		getline(cin, str);
		vector<int> b = parse_ints(str);

		skill_values(a,b);
	}

	return 0;
}
