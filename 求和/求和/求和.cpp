#include<stdio.h>
int main()
{
	int a, b, sum;//程序的声明部分，定义 a b sum为整型变量
	a = 123;b = 456;//赋值语句
	sum = a + b;/*计算
				并把结果存放到sum中*/
	printf("合计 %d\n", sum);//输出结果
	return 0;
}