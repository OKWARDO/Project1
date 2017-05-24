#include "Student.hpp"
#include <iostream>
#include <cstring>

using namespace std;

void ExtendArrayInt(int old_cap, int*ptr, int new_cap)
{
	int*backup = new int[old_cap];
	for (int i = 0; i < old_cap; i++)
		backup[i] = ptr[i];

	delete[] ptr;
	ptr = new int[new_cap];
	for (int i = 0; i < old_cap; i++)
		ptr[i] = backup[i];

	delete[] backup;
}

int foo[] = { 16, 2, 77, 40, 12071 };
int n, result = 0;

int main()
{
	for (n = 0; n<5; ++n)
	{
		result += foo[n];
	}
	cout << result;
	return 0;
}

void Student::AddGrade(int* grade)
{
	if (*m_counter <= (30))
		return;
	else
	{
		array arg[n] = n;
		int* Studentm_counter;
	}

}

	void Student::Debug()
	{
		cout << "Number of grade = " << m_counter << endl;
	
	
		for (int i = 0; i < *m_counter; i++)
	
	
		cout << array arg[n] << endl;
	}
   

Student::Student()
{
	// new is a memory alocation operator	
	array arg[n] = new int*[10]; int* m_grades; int* m_counter;
	int AddGrades();
	
	m_id = 0;
	m_FirstName = " ";
	m_capacity = 10;
	m_counter = 0;
	m_grades = 0;
	m_num_grades = 0;
	cout << "Enter Grades " << AddGrade << endl;
	cout << "Constructor called";
	

};
Student::~Student()
{
	delete[] arg array;
	cout << "Destructor called";

};

int main()
{
	Student aStudent;
	Student anotherStudent;
	Student s;
	//aStudent.set m_FirstName(" ");
	//aStudent.set m_LastName(" ");
	//aStudent.set m_grades(" ");
	//aStudent.set m_capacity(" ");
	//aStudent.set m_num_grades(" ");
	//anotherStudent.set m_FirstName(" ");
	//anotherStudent.set m_LastName(" ");
	//anotherStudent.set m_grades(" ");
	//anotherStudent.set m_capacity(" ");
	//anotherStudent.set m_num_grades(" ");
	//cout << "Student: " << aStudent.get _FirstName(), aStudent.get _LastName(), << "FirstName, LastName: " <<
	//	aStudent.getgrades << "Grade is:  " << endl;
	{void AddGrade();
	int n;

	for (int i = 0; i < 30; i++)
		AddGrade();
		s.AddGrade((float));

	s.Debug();
	return  0;

};
	void AddGrade();
	{
		AddGrade s.Grade;
		cout << "End of function" << endl;
	};


