#define _CRT_SECURE_NO_WARNINGS

//1.字面常量
// 2.const修饰的常变量
// 3.define定义的标识符常量
//4.枚举常量



#include <stdio.h>

//int main()
//{
//	const int a = 10;//本质是常量，但是不能直接被修改，有常量的属性
//	//a = 20;
//	printf("%d\n", a);
//	return 0;
//}
//
//#define MAX 100
//#define STR "ABCD"
//int main()
//{
//	printf("%d\n", MAX);
//	int a = MAX;
//	printf("%d\n", a);
//	printf("%s\n", STR);
//	return 0;
//
//}


//枚举常量

//enum Color
//{
//	RED,
//	GREEN,
//	BLUE
//};
//int main()
//{
//
//	//三原色
//	//red green blue
//	enum Color c = RED;
//
//	return 0;
//}

//字符串 "ABCd"   char 字符类型  

#include <string.h>
//int main()
//{
//
//	char arr1[] = "abcdef";
//	char arr2[] = { 'a','b','c',};
//	/*printf("%s\n", arr1);
//	printf("%s\n", arr2);*/
//	int len = strlen("abc");//求字符串长度  strlen=string length   头文件是 string.h
//	//printf("%d\n", len);
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//		return 0;
//}


//转义符
//
//int main()
//{
//	//printf("abcn");
////	printf("\a");
//	printf("%c\n", '\x63');
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	printf("加入比bitrate\n");
//	printf("要好好学习吗（1/0)?\n");
//	scanf("%d", &input);
//
//	if (input == 1) 
//	{
//		printf("好offer");
//	}
//	else
//	{
//		printf("卖红薯");
//
//	}
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//	while (line < 20000)
//
//	{
//		printf("写代码:%d\n", line);
//			line++;
//	}
//	if (line >= 20000) 
//	{
//		printf("hao offer\n");
//
//	}
//	else
//	{
//		printf("继续加油\n");
//	}
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z =  0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	scanf("%d %d", &n1, &n2);
//	//int sum = n1 + n2;
//	int sum = Add(n1, n2);
//	printf("%d\n", sum);
//
//	return 0;
//
//}


int main()

{
	int arr[] = { 0,12,2,3,4,5,6,7,8,90,99};
	//printf("%d\n", arr[8]);
	int i = 0;
	while (i < 11)
	{
		printf("%d", arr[i]);
		i = i + 1;
	}
	return 0;
}
