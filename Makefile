all:rule37 rule5 rule6 rule111 rule1111

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

#rule111.cһ��"����ҪĬ�Ϲ��캯������������������ĳ�Ա����ʱ��Ҫ�ڹ��캯����ʼ���б����ṩ��ʼ��ʽ
rule111:rule111.o
	g++ -o rule111 rule111.o
rule111.o:rule111.c
	g++ -c rule111.c

#��Ա����Ϊ������ʱ�����Ĭ�Ϲ��캯����Ϊָ��ʱ����
rule1111:rule1111.o
	g++ -o rule1111 rule1111.o
rule1111.o:rule1111.c
	g++ -c rule1111.c


.PHONY:clean
clean:
	del *.o *~ *.swp *.s
cleanAll:
	del *.o *~ *.swp *.s *.exe
