#include "Utilities.hpp"

void ExtendArrayInt(int** ptr, int old, int new_c)
{
	//int* derrefed_ptr = *ptr;
	int* temp = new int[old];
	for (int i = 0; i < old; i++)
		temp[i] = (*ptr)[i];
	
	for (int i = 0; i < old; i++)
		
	
	(*ptr)[i] = temp[i];
	delete[] * ptr;

	
	delete[] temp;
	return;
}