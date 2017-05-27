#include "Student.hpp"
#include "Utilities.hpp"
#include <iostream>
#include <cstring>

using namespace std;






//int main()
//{
//	//for (n = 0; n<5; ++n)
//	//{
//		//result + = foo[n];
//	//}
//	//cout << result;
//	return 0;
//}

//void Student::AddGrade(int grade)
//{
//	if (m_counter <= (30))
//		return;
//	//else
//	//{
//	//	array [int n =5] = n;
//	//	int* Studentm_counter;
//	//}
//
//}

//void Student::ChangeID(int new_id)
//
void Student::Debug(void)
{
	cout << "Number of grade = " << m_counter << endl;
	for (int i = 0; i < m_counter; i++ )
		cout << "grade = " << m_grades[ i ] << endl;

}

	//void Student::Debug()
			
		//for (int i = 0; i < m_counter; i++)
		
		//cout << array [] << endl;
	

	void Student::AddGrade(int g)
	{
		m_grades[m_counter] = g;
		m_counter++;
		//if need Extend array
		//ExtendArrayInt(&m_grades, m_capacity, 2 * m_capacity);
		//m_capacity += 10;


	}

   

Student::Student(void)
{
	// new is a memory alocation operator	


	
	m_id = 0;
	m_FirstName = "John ";
	m_LastName = "Doe";
	m_capacity = DEFAULT_BUFFER_CAPACITY;
	m_counter = 0;
	m_grades = new int[ DEFAULT_BUFFER_CAPACITY ];
	m_num_grades = 0;
	//cout << "Enter Grades " << AddGrade << endl;
	cout << "Constructor called";
	

};
Student::~Student()
{
	delete[] m_grades;
	cout << "Destructor called";

};



int main(int argc, char* argv[])



//{
//	A a;
//	a.AddNumber(1);
//	a.AddNumber(2);
//	a.AddNumber(3);
//	a.Debug();
//	printf("Hello world\r\n");
//	char c;
//
//
//	int myarray[10];
//
//
//	int size = sizeof(myarray);
//	printf("The size of an int is = %i", size);
//	scanf("%c", &c);
//	return 0;
//}

{
	Student aStudent;
	Student anotherStudent;
	Student s;
	for (int i = 0; i < 10; i++)
		s.AddGrade(i);

	s.Debug();
	system("pause");
}
	/*{
		int res = 0;
		int v1 = 1;
		int v2 = 1;
		add value(&res &v2 &v2);
	}*/

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
//	void AddGrade();
//	{int n;
//
//	for (int i = 0; i < 30; i++) {
//		AddGrade();
//		s.AddGrade((float)i);
//	}
//
//	s.Debug();
//	return  0;
//	}
//
//};
//	void AddGrade()
//	{
//		Student s;
//		//AddGrade s.Grade;
//		cout << "End of function" << endl;
//	};
//
//
