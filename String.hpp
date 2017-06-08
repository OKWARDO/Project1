#ifndef STRING_HPP
#define STRING_HPP

#include "Vector.hpp"
#include <cstring>
/////////////////////////////////////////////////////

class String : Vector<char>
{
public:
	String(const char* c_str)
		: Vector< char >() //Super important to memory
	{
		size_t sizeOfString = strlen(c_str);
		for (size_t i = 0; i < sizeOfString; i++)
			AddElement(c_str[i]);
	}

	String(const String& rhs)
	{

	}
	String()
	     : Vector< char >()
	{

	}
	Vector< String > Split(const char* pattern
	{

	}

	int FindFirstOccurence(char letter)
	{
		return (-1);
	}//git@github.com
	int pattern_count = 0;
	for (int i = 0; i < stren(str); i++)
	{
		if
	}
	~String()
	{

	} 
	
	static void Unit _Test(void)
	{
		String s1("James");
		Vector< String > VecOfStrings = s1Split("");

		int FirstOccurrence = s1.FindFirstOccurrence("n");

	}

};
#endif
