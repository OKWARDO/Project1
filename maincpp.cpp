#include <iostream>

using namespace std;
#include "a.hpp"
#include "Student.hpp"
#include "Vector.hpp"
#include "test.hpp"

#include <cstdio>
#include <cstring>


void alloc_int(int**ptr, int old, int new_c)

{ 
	int _old = old;
	int _new_c = new_c;
	cout << "alloc_int(int**ptr, int old, int new_c)" << endl;
	int* dereffed_ptr = *ptr;
	int* temp = new int[old];
	for (int i = 0; i < old; i++)
		temp[i] = dereffed_ptr[i];
	//cout << dereffed_ptr[i] <<endl;

	delete[] temp;
	//delete ptr;
}




int main()
{
	Student s;
	for (int i = 0; i < 60; i++)
	//{
		//ExtendArrayInt(int**ptr, int old, int new_c)
	//}
		


	

	
	s.AddGrade(i);

	s.Debug();

	system("pause");
	return 0;
}
