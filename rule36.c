#include <stdlib.h>
#include <stdio.h>

//绝不重新定义继承而来的non-virtual函数
//non-virtual函数都是静态绑定的statically bound
//virtual函数都是动态绑定的dynamically bound
class B
{
	public:
			void mf();


};

class D:public B
{
	public:
		void mf();	

};

int main()
{

	D x;
	B* pb=&x;
	pb->mf();
	D* pd=&x;
	pd->mf();

	return 0;
}
