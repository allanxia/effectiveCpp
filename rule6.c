#include <stdlib.h>
#include <stdio.h>
#include <iostream>

class HomeForSale
{
	public:
			HomeForSale(){}
			void test()
			{
					HomeForSale s;
					*this=s;
			}
	private:
			HomeForSale(const HomeForSale & rhs);
			HomeForSale & operator=(const HomeForSale & rhs);

};


class Uncopyable
{
		//构造函数使用protected，这样它的继承类才能被创建
		protected:
				Uncopyable(){}
				~Uncopyable(){}
		//复制构造函数和赋值操作符使用private，这样子类就不能
		//被赋值或拷贝了
		private:
				Uncopyable(const Uncopyable & rhs){}//这里使用空实现或者像HomeForSale一样不实现都可以
				Uncopyable& operator=(const Uncopyable & rhs){}

};

class HomeForSaleEx:private Uncopyable
{
	
};

int main()
{
	HomeForSale h1;
//	HomeForSale h2(h1);//用户调用时编译时会出错，访问了private成员
//	h1.test();//成员变量调用时链接会报错,函数1定义
	HomeForSaleEx he1;
	std::cout<<"禁止编译器自动产生赋值操作符和复制构造函数"<<std::endl;
	return 0;
}
