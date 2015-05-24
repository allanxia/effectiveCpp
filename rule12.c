#include <stdlib.h>
#include <stdio.h>
#include <iostream>


class A
{
	public:
			A(std::string s){str=s;}


	private:
					std::string str;

};

class B
{
	public:
		B(){}
	private:
			A a;

};


int main()
{
	B b;
	return 0;
}
