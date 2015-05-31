#include <stdlib.h>
#include <stdio.h>
#include <iostream>
/*
void * operator new(std::size_t size) throw(std::bad_alloc)
{
	std::cout<<"global new"<<std::endl;
	return ::operator new(size);
}

void operator delete(void * p)
{
	std::cout<<"global delete"<<std::endl;
	::operator delete(p);
}
*/

class Base
{
	public:
	void * operator new(std::size_t size) throw(std::bad_alloc)
	{
		std::cout<<"Base new"<<std::endl;
		return ::operator new(size);
	}

	void operator delete(void * p)
	{
		std::cout<<"Base delete"<<std::endl;
		::operator delete(p);
	}
};

int main()
{
	std::cout<<"重载类内的operator new和operator delete"<<std::endl;
	Base * b=new Base();
	delete b;
	return 0;
}
