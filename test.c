#include<stdio.h>//std-��׼ standard input output
//int ������
//mainǰ���int��ʾmain�������÷���һ������ֵ
int num2 = 20;//ȫ�ֱ���
int main()//������-�������ڡ����ҽ���һ��
{
	int num = 0; int sum = 0;
	int num1= 0;//�ֲ�����,�ֲ�������ȫ�ֱ�������ʱ�ֲ���������
	//��������-ʹ�����뺯��scanf
	scanf_s("%d%d", &num, &num1);//ȡ��ַ����&
	sum = num + num1;
	printf("sum=%d\n", sum);
	/*char a = 'A';
	int age = 20;
	printf("%d\n", num2);
	printf("%d\n", sizeof(char));//char��λ��1�ֽ�
	printf("%d\n", sizeof(double));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", age);//%d--��ӡ����ʮ��������
	printf("%c\n",a);//%c--��ӡ�ַ���ʽ������
	printf("hehe\n");*/
	return 0;//����0
}