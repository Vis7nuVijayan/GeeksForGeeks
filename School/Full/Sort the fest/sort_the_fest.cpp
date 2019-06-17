/*
 * Sort the fest
 *
 *		Author : Vishnu Vijayan
 *		  Date : 17-Oct-2017
 *		  Time : 10:46:59 AM
 *
 */

using namespace std;

#include <iostream>
#include <sstream>
#include <set>

string sort_the_fest(set<string> menu1, set<string> menu2)
{
	for(string item1 : menu1)
	{
		for(string item2 : menu2)
		{
			if(item1.compare(item2) == 0)
				return "CHANGE";
		}
	}

	return "BEHAPPY";
}

set<string> get_menu(string s)
{
	stringstream ss(s);
	string item;
	set<string> menu;

	while(ss >> item)
		menu.insert(item);

	return menu;
}

int main()
{
	int testcases;
	cin >> testcases;

	cin.ignore();

	while(testcases--)
	{
		string s;
		getline(cin,s);
		set<string> restaurant_1 = get_menu(s);
		
		getline(cin,s);
		set<string> restaurant_2 = get_menu(s);

		cout << sort_the_fest(restaurant_1, restaurant_2) << endl;
	}

	return 0;
}
