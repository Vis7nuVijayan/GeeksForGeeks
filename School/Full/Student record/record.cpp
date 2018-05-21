#include<iostream>
#include<vector>

using namespace std;


class Student
{
	public:
		string name;
		int mark_1;
		int mark_2;
		int mark_3;
		int average;

		Student(string name, int m1, int m2, int m3)
		{
			this->name = name;
			mark_1 = m1;
			mark_2 = m2;
			mark_3 = m3;

			average = (mark_1+mark_2+mark_3)/3;
		}
};

Student getMaxStudent(int n)
{
	vector<Student> record;

	while(n--)
	{
		string name;
		int m1, m2, m3;
		cin >> name >> m1 >> m2 >> m3;

		Student s(name, m1, m2, m3);
		record.push_back(s);
	}

	Student max = record[0];

	for(Student s : record)
		if(s.average > max.average)
			max = s;

	return max;
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

		Student max = getMaxStudent(N);

		cout << max.name << " " << max.average << endl;
	}

	return 0;
}
