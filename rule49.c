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
	std::cout<<"�滻new���ڴ治��ʱ�Ĵ�����"<<std::endl;
	std::set_new_handler(outOfMem);
	int *p=new int[1000000000L];
	return 0;
}
