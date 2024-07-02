//#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>

//int main()
//{
//	printf("hehe\n");
//	return 0;
//}
//int main()
//{
//	printf("%zu\n", sizeof(char));
//	printf("%zu\n", sizeof(int));
//	printf("%zu\n", sizeof(short));
//	printf("%zu\n", sizeof(long));
//	printf("%zu\n", sizeof(long long));
//	printf("%zu\n", sizeof(float));
//	printf("%zu\n", sizeof(double));
//	return 0;
//}

//int main()
//{
//	int age = 20;
//	double price = 66.6;
//	//printf("%d\n", age)
//	return 0;
//}

//变量和常量的概念
//局部变量{}内部定义的变量和全局变量{}外部定义的变量
//int b = 20;
//int main()
//{
//	short age = 20;
//	int high = 188;
//	float weight = 88.5;
//
//	return 

//
//int a = 100;
//int main()
//{
//	int a = 10;
//	printf("a=%d\n", a);
//	return 0;
//}


//写一个代码，计算2个整数的和
//int main()
//{
//	int num1 = 0;
//
//	int num2 = 0;//初始化
//	scanf("%d %d", &num1, &num2);
//	int sum = num1 + num2;
//	printf("%d\n", sum);
//	
//	return 0;
//
//}



//变量的作用域
// 1.局部变量
// 变量所在的局部范围
// 2.全局变量
// 整个工程
// 变量的生命周期
// 1.局部变量
// 进入作用域开始，出作用域生命周期结束
// 2.全局变量
// 整个程序的生命周期
//







extern int a;

void test()
{
	printf("test-->%d\n", a);
}
int main()
{
	{

		printf("a=%d\n", a);
	}
	printf("a=%d\n", a);
	return 0;
}
