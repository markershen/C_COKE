#define _CRT_SECURE_NO_WARNINGS

//1.���泣��
// 2.const���εĳ�����
// 3.define����ı�ʶ������
//4.ö�ٳ���



#include <stdio.h>

//int main()
//{
//	const int a = 10;//�����ǳ��������ǲ���ֱ�ӱ��޸ģ��г���������
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


//ö�ٳ���

//enum Color
//{
//	RED,
//	GREEN,
//	BLUE
//};
//int main()
//{
//
//	//��ԭɫ
//	//red green blue
//	enum Color c = RED;
//
//	return 0;
//}

//�ַ��� "ABCd"   char �ַ�����  

#include <string.h>
//int main()
//{
//
//	char arr1[] = "abcdef";
//	char arr2[] = { 'a','b','c',};
//	/*printf("%s\n", arr1);
//	printf("%s\n", arr2);*/
//	int len = strlen("abc");//���ַ�������  strlen=string length   ͷ�ļ��� string.h
//	//printf("%d\n", len);
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//		return 0;
//}


//ת���
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
//	printf("�����bitrate\n");
//	printf("Ҫ�ú�ѧϰ��1/0)?\n");
//	scanf("%d", &input);
//
//	if (input == 1) 
//	{
//		printf("��offer");
//	}
//	else
//	{
//		printf("������");
//
//	}
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	printf("�������\n");
//	while (line < 20000)
//
//	{
//		printf("д����:%d\n", line);
//			line++;
//	}
//	if (line >= 20000) 
//	{
//		printf("hao offer\n");
//
//	}
//	else
//	{
//		printf("��������\n");
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
