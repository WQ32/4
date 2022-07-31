#include <stdio.h>
#include <string.h>
//求n的斐波那契数
//int Fib(n)	//用递归效率太低
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
int Fib(n)		//循环的方式速度快
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fib(n);
	printf("ret=%d\n", ret);
	return 0;
}
求n的阶乘
int Facl(int n)
{
	if(n<=1)
		return 1;
	else
		return n * Facl(n - 1);
	/*int i = 0;//循环方式
	int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret *= i;
	}
	return ret;*/
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret=Facl(n);
	printf("n的阶乘为:%d\n", ret);
	return 0;
}
用递归求字符串长度
int my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}
int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[] = "bit";
	/*int len =strlen(arr);
	printf("%d\n", len);*/
	int len = my_strlen(arr);
	printf("len=%d\n", len);
	return 0;
}
用递归输出一个数
void print(int n)
{
	if (n >9)
	{
		print(n / 10);
	}
	printf("%d ", n%10);
}
int main()
{
	unsigned int num = 0;
	scanf("%d", &num);
	print(num);
	return 0;
}