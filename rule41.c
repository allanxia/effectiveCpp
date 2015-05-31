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
	std::cout<<"重载函数调用操作符"<<std::endl;
	Test t=Test();
	t();
	return 0;
}
