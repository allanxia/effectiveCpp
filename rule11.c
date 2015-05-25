#include <stdlib.h>
#include <stdio.h>
#include <iostream>

class Bitmap
{
	public:
			//默认的构造函数
			Bitmap()
			{
				std::cout<<"bitmap construction:"<<this<<std::endl;
			}
			//拷贝构造函数
			Bitmap(const Bitmap &rhs)
			{
				std::cout<<"bitmap copy construction:"<<this<<std::endl;
			}

			//赋值操作符
			Bitmap& operator=(const Bitmap & rhs)
			{
				std::cout<<"operator assignment:"<<this<<" = "<<&rhs<<std::endl;
			}
};

class Widget
{
	public:
			Widget()
			{
				pb=new Bitmap();
				std::cout<<"Widget construction"<<std::endl;
			}

			//异常安全并且自我赋值安全的operator=写法
			Widget& operator=(const Widget & rhs)
			{
				Bitmap * pOrig=pb;
				pb=new Bitmap();
				std::cout<<"delete:"<<pOrig<<std::endl;
				delete pOrig;
				return *this;
			}
			~Widget()
			{
				if(pb!=NULL)
					delete pb;
				std::cout<<"Widget deconstruction:"<<pb<<std::endl;
			}
			private:
			Bitmap* pb;

};

void test()
{
	Widget w1;
	Widget w2;
	w2=w1;//赋值操作

}

int main()
{
	test();
	std::cout<<"test"<<std::endl;
	return 0;
}



