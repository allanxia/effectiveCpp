all:rule37

.PHONY:all

#rule37.绝不重新定义继承而来的缺省参数值
rule37:rule37.o
	g++ -o rule37 rule37.o
rule37.o:rule37.c
	g++ -c rule37.c

.PHONY:clean
clean:
	del *.o *~ *.swp
cleanAll:
	del *.o *~ *.swp *.exe
