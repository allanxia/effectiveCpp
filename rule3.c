#include <stdlib.h>
#include <stdio.h>
#include <iostream>

class ConstObj
{
	public:
			void print()const
			{
				std::cout<<"print const"<<std::endl;
			}
			void print()
			{
				std::cout<<"print non-const"<<std::endl;
			}

};

int main()
{

	ConstObj obj;
	obj.print();
	const ConstObj cO;
	cO.print();
	return 0;
}
