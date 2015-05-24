#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#define CLASSTYPE //������ʾ��Ա��������Ϊָ�����͵�
//#define POINTTYPE //������ʾ��Ա��������Ϊ�����͵�
//��Ա����Ϊ������ʱ�����Ĭ�Ϲ��캯����Ϊָ��ʱ����
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
			Bitmap *pb;//����Ϊָ��ʱ�������Bitmap�Ĺ��캯��
			#endif

			#ifdef CLASSTYPE
			Bitmap b;//��Ա����Ϊ������ʱ�ڹ��캯���вŻ����Bitmap�Ĺ��캯��
			#endif

};


int main()
{
	std::cout<<"��Ա����Ϊ������ʱ�����Ĭ�Ϲ��캯����Ϊָ��ʱ����"<<std::endl;
	Widget w1;
	Widget w2;
	w2=w1;
	return 0;
}



