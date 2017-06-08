#include "a.hpp"
#include "Student.hpp"
#include "Vector.hpp"
#include "test.hpp"
#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;



int main(int argc, char* argv[])
{
	Student s;
	for (int i = 0; i < 60; i++)
	{
		s.AddGrade(i);
		//ExtendArrayInt(int**ptr, int old, int new_c)
	}
	s.Debug();

	system("pause");
	return 0;
};
