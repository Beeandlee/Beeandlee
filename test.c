#include<stdio.h>//std-标准 standard input output
//int 是整型
//main前面的int表示main函数调用返回一个整型值
int num2 = 20;//全局变量
int main()//主函数-程序的入口、有且仅有一个
{
	int num = 0; int sum = 0;
	int num1= 0;//局部变量,局部变量和全局变量重名时局部变量优先
	//输入数据-使用输入函数scanf
	scanf_s("%d%d", &num, &num1);//取地址符号&
	sum = num + num1;
	printf("sum=%d\n", sum);
	/*char a = 'A';
	int age = 20;
	printf("%d\n", num2);
	printf("%d\n", sizeof(char));//char单位：1字节
	printf("%d\n", sizeof(double));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", age);//%d--打印整型十进制数据
	printf("%c\n",a);//%c--打印字符格式的数据
	printf("hehe\n");*/
	return 0;//返回0
}