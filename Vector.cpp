#include Vector.hpp
#include <iostream>
#include <cstring>
#include Utilities.hpp
#include a.hpp
#include test.hpp
using namespace std;


class String: Vector<char>
{
public:
int Find First Occurence(car c);
std::Vector<String> Split(char* patern);
};
//String S("785.304.4917");
//std::Vector<string> = s.Split(".");

void Vector::AddGrade(int g)
{
	m_grades[m_counter] = g;
	m_counter++;
	//if need Extend array
	if (m_counter == m_capacity)
	{
		ExtendArrayInt(&m_grades, m_capacity, 2 * m_capacity);
		m_capacity += 10;
	}



}

 ~vector(void)
{
	delete[] m_buffer;
}

