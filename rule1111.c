#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#define CLASSTYPE //这个宏表示成员变量中有为指针类型的
//#define POINTTYPE //这个宏表示成员变量中有为类类型的
//成员变量为类类型时会调用默认构造函数，为指针时不会
class Bitmap
{
	public:
			Bitmap()
			{
				std::cout<<"bitmap construction:"<<this<<std::endl;
			}
};

class Widget
{
	public:
			Widget()
			{
				#ifdef POINTTYPE
				pb=new Bitmap();
				std::cout<<"Widget construction:"<<pb<<std::endl;
				#endif

				#ifdef CLASSTYPE
				b=Bitmap();
				std::cout<<"Widget construction:"<<&b<<std::endl;
				#endif
			}
			Widget & operator=(const Widget & w)
			{
				#ifdef POINTTYPE
				delete pb;
				std::cout<<"operator= before new"<<std::endl;
				pb=new Bitmap(*w.pb);
				std::cout<<"operator= after new"<<std::endl;
				#endif

				#ifdef CLASSTYPE
				b=w.b;
				#endif
				return *this;
			}
	private:
			#ifdef POINTTYPE
			Bitmap *pb;//类型为指针时不会调用Bitmap的构造函数
			#endif

			#ifdef CLASSTYPE
			Bitmap b;//成员变量为类类型时在构造函数中才会调用Bitmap的构造函数
			#endif

};


int main()
{
	std::cout<<"成员变量为类类型时会调用默认构造函数，为指针时不会"<<std::endl;
	Widget w1;
	Widget w2;
	w2=w1;
	return 0;
}



