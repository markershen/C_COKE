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

//�����ͳ����ĸ���
//�ֲ�����{}�ڲ�����ı�����ȫ�ֱ���{}�ⲿ����ı���
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


//дһ�����룬����2�������ĺ�
//int main()
//{
//	int num1 = 0;
//
//	int num2 = 0;//��ʼ��
//	scanf("%d %d", &num1, &num2);
//	int sum = num1 + num2;
//	printf("%d\n", sum);
//	
//	return 0;
//
//}



//������������
// 1.�ֲ�����
// �������ڵľֲ���Χ
// 2.ȫ�ֱ���
// ��������
// ��������������
// 1.�ֲ�����
// ����������ʼ�����������������ڽ���
// 2.ȫ�ֱ���
// �����������������
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
