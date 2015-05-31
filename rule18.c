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
			//注意这里没有传递引用了，不然下面Pane类的初始化列表就不能那样写了
			Widget(Bitmap bitmap):b(bitmap)
			{
				std::cout<<"Widget(Bitmap &b) construction:"<<&b<<std::endl;
			}
			private:
			Bitmap b;//成员变量为类类型时在构造函数中才会调用Bitmap的构造函数

};

class Pane
{
		public:
				//由于Widget没有默认的构造函数，所以需要在Pane的构造函数初始化列表中提供参数进行
				//初始化，这里没有为其提供初始化式，会导致构造失败
				//把下面的注释解开就是正常的写法了，提供了w类的初始化式
				Pane():w(Bitmap())
				{
					std::cout<<"pane construction:"<<this<<std::endl;
				}

		private :
				Widget w;
};

int main()
{
	Pane p;
	std::cout<<"一个类需要默认构造函数，否则当它是另外类的成员变量时需要在构造函数初始化列表中提供初始化式"<<std::endl;
	return 0;
}



