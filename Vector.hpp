#ifndef VECTOR_HPP
#define VECTOR_HPP
#define VECTOR_DEFAULT_CAPACITY 30

typedef unsigned long int count_t;

template <typename T> class Vector
{
protected:
	count_t            m_capacity;
    T*                 m_buffer;
    count_t            m_counter;
	

public:
	Vector(void)
	{
		m_capacity = VECTOR_DEFAULT_CAPACITY;
		m_counter = 0;
		m_buffer = new T[m_capacity];
		void AddGrade(int grade);
		void Debug();
	}
	virtual ~Vector(void)
	{
		delete[] m_buffer;
	}
};


	
//class String: Vector<char>
//{
//public:
	//int Find First Occurence(car c);
	//std::Vector<String> Split(char* patern);
//};
//String S("785.304.4917");
//std::Vector<string> = s.Split(".");

#endif
