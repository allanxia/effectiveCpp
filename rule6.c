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
		//���캯��ʹ��protected���������ļ̳�����ܱ�����
		protected:
				Uncopyable(){}
				~Uncopyable(){}
		//���ƹ��캯���͸�ֵ������ʹ��private����������Ͳ���
		//����ֵ�򿽱���
		private:
				Uncopyable(const Uncopyable & rhs){}//����ʹ�ÿ�ʵ�ֻ�����HomeForSaleһ����ʵ�ֶ�����
				Uncopyable& operator=(const Uncopyable & rhs){}

};

class HomeForSaleEx:private Uncopyable
{
	
};

int main()
{
	HomeForSale h1;
//	HomeForSale h2(h1);//�û�����ʱ����ʱ�����������private��Ա
//	h1.test();//��Ա��������ʱ���ӻᱨ��,����1����
	HomeForSaleEx he1;
	std::cout<<"��ֹ�������Զ�������ֵ�������͸��ƹ��캯��"<<std::endl;
	return 0;
}
