#include <stdlib.h>
#include <stdio.h>
#include <iostream>

//����ľ�̬����(static type)���������ڳ����б�����ʱ�����õ�����
class Shape
{
	public:
	enum ShapeColor{Red,Green,Blue};

	virtual void draw(ShapeColor color=Red) const =0;

	void paint(ShapeColor color=Red) const
	{
		doPaint(color);//����һ��virtual����
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
			//���Զ�������������ʱ��һ��Ҫָ������ֵ��
			//��Ϊ��̬�������������������base�̳�ȱʡ�Ĳ���ֵ
			//������ָ������õ��ô˺��������Բ�ָ������ֵ��
			//��Ϊ��̬����������������base�̳�ȱʡ����ֵ
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

	Shape *ps;//��̬������Shape*
	Shape *pc=new Circle;//��̬������Shape*
	Shape *pr=new Rectangle;//��̬������Shape*

	pr->paint();
//	pc->draw(Shape::Red);
//	pr->draw();

//	pr->draw();

//	Circle oc;
//	oc.draw();
	return 0;
}
