#include<iostream>
#include<map>
#include<cmath>

using namespace std;


int getDecimal(map<char,int> hm, int b, string s)
{
	int len = s.size()-1;
	int sum = 0;

	for(char c : s)
	{
		if(b < 11 || hm.find(c) == hm.end())
			sum += (c-'0')*pow(b,len--);

		else
			sum += hm[c]*pow(b,len--);
	}

	return sum;
}

map<char,int> fillMap()
{
	map<char,int> hm;

	hm.insert(make_pair('A',10));
	hm.insert(make_pair('B',11));
	hm.insert(make_pair('C',12));
	hm.insert(make_pair('D',13));
	hm.insert(make_pair('E',14));
	hm.insert(make_pair('F',15));

	return hm;
}

int main()
{
	//code
	int T;
	cin >> T;

	map<char,int> hm = fillMap();

	while(T--)
	{
		int base;
		cin >> base;

		string s;
		cin >> s;

		cout << getDecimal(hm, base, s) << endl;
	}
	return 0;
}
