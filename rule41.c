#include <stdio.h>
#include <stdlib.h>
#include <iostream>


class Test
{
		public:
		bool operator()()
		{
				std::cout<<"operator () invoke!"<<std::endl;
				return true;
		}
};


int main()
{
	std::cout<<"���غ������ò�����"<<std::endl;
	Test t=Test();
	t();
	return 0;
}
