all:rule37 rule5

.PHONY:all

#rule37.�������¶���̳ж�����ȱʡ����ֵ
rule37:rule37.o
	g++ -o rule37 rule37.o
rule37.o:rule37.c
	g++ -c rule37.c
#rule5.�˽�C++Ĭ�ϱ�д�����õĺ���
rule5:rule5.o
	g++ -o rule5 rule5.o
rule5.o:rule5.c
	g++ -c rule5.c

.PHONY:clean
clean:
	del *.o *~ *.swp
cleanAll:
	del *.o *~ *.swp *.exe
