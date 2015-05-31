all:rule37 rule5 rule6 rule111 rule1111 rule41 rule49 \
		rule51

.PHONY:all

#rule37.绝不重新定义继承而来的缺省参数值
rule37:rule37.o
	g++ -o rule37 rule37.o
rule37.o:rule37.c
	g++ -c rule37.c

#rule5.了解C++默认编写并调用的函数
rule5:rule5.o
	g++ -o rule5 rule5.o
rule5.o:rule5.c
	g++ -c rule5.c

#rule6.禁止编译器自动生成赋值运算符和拷贝构造函数
rule6:rule6.o
	g++ -o rule6 rule6.o
rule6.o:rule6.c
	g++ -c rule6.c

#rule111.c一个"类需要默认构造函数，否则当它是另外类的成员变量时需要在构造函数初始化列表中提供初始化式
rule111:rule111.o
	g++ -o rule111 rule111.o
rule111.o:rule111.c
	g++ -c rule111.c

#成员变量为类类型时会调用默认构造函数，为指针时不会
rule1111:rule1111.o
	g++ -o rule1111 rule1111.o
rule1111.o:rule1111.c
	g++ -c rule1111.c

#rule41.c重载函数调用操作符
rule41:rule41.o
	g++ -o rule41 rule41.o
rule41.o:rule41.c
	g++ -c rule41.c

#rule49.c替换new中内存不足时的处理函数
rule49:rule49.o
	g++ -o rule49 rule49.o
rule49.o:rule49.c
	g++ -c rule49.c

#rule51.c:重载类内的operator new 和operator delete操作符
rule51:rule51.o
	g++ -o rule51 rule51.o
rule51.o:rule51.c
	g++ -c rule51.c




.PHONY:clean
clean:
	del *.o *~ *.swp *.s .*.swp
cleanAll:
	del *.o *~ *.swp *.s *.exe .*.swp
