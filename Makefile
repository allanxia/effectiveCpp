all:rule37

.PHONY:all

#rule37.�������¶���̳ж�����ȱʡ����ֵ
rule37:rule37.o
	g++ -o rule37 rule37.o
rule37.o:rule37.c
	g++ -c rule37.c

.PHONY:clean
clean:
	del *.o *~ *.swp
cleanAll:
	del *.o *~ *.swp *.exe
