all:rule37 rule5 rule6

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

#rule6.��ֹ�������Զ����ɸ�ֵ������Ϳ������캯��
rule6:rule6.o
	g++ -o rule6 rule6.o
rule6.o:rule6.c
	g++ -c rule6.c

.PHONY:clean
clean:
	del *.o *~ *.swp *.s
cleanAll:
	del *.o *~ *.swp *.s *.exe
