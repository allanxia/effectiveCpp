#include <stdlib.h>
#include <stdio.h>
#include <iostream>

//C++默认编写并调用那些函数
template<class T>
class NamedObject
{

		public:
				//由于str和objectVale为引用或const类型，所以必须在初始化列表中进行初始化
				NamedObject(std::string & s,const T &t)
					:str(s),objectValue(t)
				{
					std::cout<<"const invoke!"<<std::endl;
				}
				
				//由于成员变量中存在引用和const类型，所以必须要
				//自定义operator=操作符，因为引用和const类型都不能
				//重新赋值
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
	//注意const char *只能转换成std::string而不能转换成std::string&，所以下面两步不能合并成一步
	std::string s="hello";
	NamedObject<int> obj1(s,1);
	NamedObject<int> obj2(obj1);
	obj2=obj1;
	return 0;
}
