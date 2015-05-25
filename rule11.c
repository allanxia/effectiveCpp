#include <stdlib.h>
#include <stdio.h>
#include <iostream>

class Bitmap
{
	public:
			//Ĭ�ϵĹ��캯��
			Bitmap()
			{
				std::cout<<"bitmap construction:"<<this<<std::endl;
			}
			//�������캯��
			Bitmap(const Bitmap &rhs)
			{
				std::cout<<"bitmap copy construction:"<<this<<std::endl;
			}

			//��ֵ������
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

			//�쳣��ȫ�������Ҹ�ֵ��ȫ��operator=д��
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
	w2=w1;//��ֵ����

}

int main()
{
	test();
	std::cout<<"test"<<std::endl;
	return 0;
}



