#include <stdlib.h>
#include <stdio.h>

//�������¶���̳ж�����non-virtual����
//non-virtual�������Ǿ�̬�󶨵�statically bound
//virtual�������Ƕ�̬�󶨵�dynamically bound
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
