all:rule37 rule5

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

.PHONY:clean
clean:
	del *.o *~ *.swp
cleanAll:
	del *.o *~ *.swp *.exe
