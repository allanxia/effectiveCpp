#include <stdlib.h>
#include <stdio.h>
#include <iostream>

//对象的静态类型(static type)，就是它在程序中被声明时所采用的类型
class Shape
{
	public:
	enum ShapeColor{Red,Green,Blue};

	virtual void draw(ShapeColor color=Red) const =0;

	void paint(ShapeColor color=Red) const
	{
		doPaint(color);//调用一个virtual函数
	}

	private:
	virtual void doPaint(ShapeColor color) const =0;
};

class Rectangle :public Shape
{
	public:
			virtual void draw(ShapeColor color=Green) const;
	private:
	virtual void doPaint(ShapeColor color) const ;
};

class Circle:public Shape
{
	public:
			//当以对象调用这个函数时，一定要指定参数值。
			//因为静态绑定下这个函数并不从其base继承缺省的参数值
			//但若以指针或引用调用此函数，可以不指定参数值，
			//因为动态绑定下这个函数会从其base继承缺省参数值
			virtual void draw(ShapeColor) const;
	private:
	virtual void doPaint(ShapeColor color) const ;

};

void Rectangle::draw(ShapeColor color) const{
	switch (color)
	{
		case Green:
			{
			std::cout<<"rectangle draw green"<<std::endl;
			break;
			}
		case Red:
			{
			std::cout<<"rectangle draw red"<<std::endl;
			break;
			}
		default:
			break;
	}
}
void Circle::draw(ShapeColor color) const{
	switch (color)
	{
		case Green:
			{
			std::cout<<"circle draw green"<<std::endl;
			break;
			}
		case Red:
			{
			std::cout<<"circle draw red"<<std::endl;
			break;
			}
		default:
			break;
	}
}

void Rectangle::doPaint(ShapeColor color) const{
	std::cout<<"rectangle doPaint "<<color<<std::endl;
}
void Circle::doPaint(ShapeColor color) const{
	std::cout<<"circle doPaint "<<color<<std::endl;
}

int main()
{

	Shape *ps;//静态类型是Shape*
	Shape *pc=new Circle;//静态类型是Shape*
	Shape *pr=new Rectangle;//静态类型是Shape*

	pr->paint();
//	pc->draw(Shape::Red);
//	pr->draw();

//	pr->draw();

//	Circle oc;
//	oc.draw();
	return 0;
}
