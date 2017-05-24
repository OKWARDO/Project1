#pragma once
#ifndef STUDENT_HPP
#define STUDENT_HPP
#include <string>

class Student
{
private:
	int m_id;
	std::string m_FirstName;
	std::string m_LastName;
	int* m_grades;
	int m_capacity;
	int m_num_grades;
	int* m_counter;
public:

	
	void AddGrade(int * grade);
	void Debug();
	Student(void);
	Student();
	~Student();//default constructor
	~Student(void);
	int grade;
	int* n() { return m_counter; }
};






//Student.cpp


#endif
