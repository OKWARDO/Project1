#include "Student.hpp"
#include "Utilities.hpp"
#include "test.hpp"
//A.hpp needed
#include <cstdio>
#include <iostream>
#include <cstring>
#include "a.hpp"

using namespace std;

void test01(void)
{
	Student s;
	for (int i = 0; i < 10; i++)
	{
		s.AddGrade(i);

	}
	s.Debug();
	char c;
	scanf("%", &c);
}

void test02(void)
{
	int* ar = new int[10];
	ExtendArrayInt(&ar, 10, 20);
	ar[19] = 666;
	cout << ar[19] << endl;
	delete[] ar;
}
//void test03(void)
//{
	//A a; //creating an object of type A
	//a.AddNumber(1);
	//a.AddNumber(2);
	//a.AddNumber(6);
	//a.debug();
//}

void test04(void)
{
	int* myarray = new int[10];
	int cap = 10;
	int n_cap = 20;
	
	for (int i = 0; i < cap; i++)
		myarray[i] = i;
	ExtendArrayInt(&myarray, cap, n_cap);

	for (int i = cap; i < n_cap; i++)
		myarray[i] = i;
	for (int i = 0; i < n_cap; i++)
		cout << "value at location" << i << "is :" << myarray[i] << endl;

	delete[] myarray;

}

//

void test06(void)
{
	Student s;

	for (int i = 0; i < 30; i++)
	{
		s.AddGrade(i);
	}
	s.Debug();
}
