#include <stdlib.h>
#include <stdio.h>
#include <iostream>

//C++Ĭ�ϱ�д��������Щ����
template<class T>
class NamedObject
{

		public:
				//����str��objectValeΪ���û�const���ͣ����Ա����ڳ�ʼ���б��н��г�ʼ��
				NamedObject(std::string & s,const T &t)
					:str(s),objectValue(t)
				{
					std::cout<<"const invoke!"<<std::endl;
				}
				
				//���ڳ�Ա�����д������ú�const���ͣ����Ա���Ҫ
				//�Զ���operator=����������Ϊ���ú�const���Ͷ�����
				//���¸�ֵ
				NamedObject& operator=(const NamedObject & rhs)
				{
						std::cout<<"operator= invoke!"<<std::endl;
				}

		private:
				 std::string & str;
				 const T objectValue;
};
				
int main()
{
	//ע��const char *ֻ��ת����std::string������ת����std::string&�����������������ܺϲ���һ��
	std::string s="hello";
	NamedObject<int> obj1(s,1);
	NamedObject<int> obj2(obj1);
	obj2=obj1;
	return 0;
}
