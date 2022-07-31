  

//#include <stdio.h>
//#include "add.h"
//
//
//int main()
//{
//	int a = 20;
//	int b = 10;
//	//函数调用
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}

//链式访问//
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 65)));
//	return 0;
//}
//int main()
//{
//	int len = 0;
//	len = strlen("zxcbvnm");
//	printf("%d\n", len);
//	printf("%d\n", strlen("zxcbvnm"));
//	return 0;
//}
////函数的嵌套调用//
//void one_line()
//{
//	printf("呵呵呵\n");
//}
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i <= 5; i++)
//	{
//		one_line();
//	}
//}
//int main()
//{
//	three_line();
//	return 0;
//}
//用函数实现num++//
//void Add(int* p)
//{
//	(*p)++;//++的优先级高于*//
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	return 0;
//}
//用函数用二分法求某个数的下标//
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)//必须要等号，否则找不了//
//	{
//		int mid = (left + right) / 2;//必须在循环内//
//		if (arr[mid]<k)
//		{
//			left = mid + 1;
//		}
//		else if(arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;//必须有返回值//
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 8;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == 0)
//	{
//		printf("找不到这个数……");
//	}
//	else
//	{
//		printf("找到了！！！这个数的下标为:%d\n", ret);
//	}
//	return 0;
//}
// //用函数求闰年//
//int is_leap_year(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0)|| year % 400 == 0)
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 2000; year <= 3000; year++)
//	{
//		if (is_leap_year(year) == 1)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}
//#include <math.h>
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//		return 1;
//	}
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//void Swap(int* pa, int* pb)
//{
//	int temp = 0;
//	temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//int main()
//{
//	int a = 20;
//	int b = 10;
//	printf("a=%d,b=%d\n",a, b);
//	Swap(&a, &b);
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}
//#include <string.h>
//
//int main()
//{
//	char arr1[] = "zxcvbnm";
//	char arr2[20] = "################";//有拷贝的内容有\n，遇到\n就不再拷贝后面的#了//
//	strcpy(arr2, arr1);//拷贝时也含\n//
//	printf("%s\n", arr2);
//	return 0;
//}
//#include <string.h>
//int main()
//{
//	char arr[] = "Hello World";
//	memset(arr,'*', 5);
//	printf("%s\n", arr);
//	return 0;
//}
// int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 25;
//	int max=get_max(a, b);
//	printf("max=%d\n", max);
//	max = get_max(150, 642);
//	printf("max=%d\n", max);
//	return 0;
//}
