#include <stdlib.h>
#include <stdio.h>
#include <iostream>

void outOfMem()
{
	std::cerr<<"out of memory"<<std::endl;
	exit(1);
}

int main()
{
	std::cout<<"替换new中内存不足时的处理函数"<<std::endl;
	std::set_new_handler(outOfMem);
	int *p=new int[1000000000L];
	return 0;
}
