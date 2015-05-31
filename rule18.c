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
			//ע������û�д��������ˣ���Ȼ����Pane��ĳ�ʼ���б�Ͳ�������д��
			Widget(Bitmap bitmap):b(bitmap)
			{
				std::cout<<"Widget(Bitmap &b) construction:"<<&b<<std::endl;
			}
			private:
			Bitmap b;//��Ա����Ϊ������ʱ�ڹ��캯���вŻ����Bitmap�Ĺ��캯��

};

class Pane
{
		public:
				//����Widgetû��Ĭ�ϵĹ��캯����������Ҫ��Pane�Ĺ��캯����ʼ���б����ṩ��������
				//��ʼ��������û��Ϊ���ṩ��ʼ��ʽ���ᵼ�¹���ʧ��
				//�������ע�ͽ⿪����������д���ˣ��ṩ��w��ĳ�ʼ��ʽ
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
	std::cout<<"һ������ҪĬ�Ϲ��캯������������������ĳ�Ա����ʱ��Ҫ�ڹ��캯����ʼ���б����ṩ��ʼ��ʽ"<<std::endl;
	return 0;
}



