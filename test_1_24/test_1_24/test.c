#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//void print(int n)
//{
//	if (n)
//	{
//		print(n / 10);
//		printf("%d ", n % 10);
//	}
//	else
//		return 0;
//}
////�׳˵ĵݹ�ʵ��
//int rec1(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return n*rec1(n - 1);
//}//ѭ��ʵ��
//int rec2(int n)
//{
//	int ret = 1;
//	while (n)
//	{
//		ret *= n;
//		n--;
//	}
//	return ret;
//}
//�ݹ�ʵ��strlen
//int my_strlen1(char *c)
//{
//	if (*c != '\0')
//	{
//		c++;
//		return my_strlen1(c) + 1;
//	}
//	else
//		return 0;
//}
////ѭ��ʵ��
//int my_strlen2(char *c)
//{
//	int count = 0;
//	while (*c)
//	{
//		count++;
//		c++;
//	}
//	return count;
//}
//�ݹ�ʵ���ַ����ĵ���
//char* inv(char * c, int a, int b)
//{
//	if (a <= b)
//	{
//		char tmp = *(c + a);
//		*(c + a) = *(c + b);
//		*(c + b) = tmp;
//		return inv(c,a+1,b-1);
//	}
//	else
//		return c;
//}
//int add_sum(int n)
//{
//	if (n)
//	{
//		return (n % 10)+add_sum(n / 10);
//	}
//	else
//		return 1;
//}
//int my_pow(int n,int k)
//{
//	if (k > 0)
//	{
//		return n*my_pow(n, k - 1);
//	}
//	else
//		return 1;
//}
//�ݹ�ʵ��쳲���������(�����߼���࣬��nֵ���󣬵ݹ�������ർ��ջ�����Ч�ʲ���)
int Fib1(int n)
{
	if (n > 2)
	{
		return Fib1(n - 1) + Fib1(n - 2);
	}
	else
		return 1;
}
//ѭ��ʵ�֣�Ч�ʸ�
int Fib2(int n)
{
	int i = 1;
	int j = 1;
	int ret = 1;
	while (n > 2)
	{
		i = j;
		j = ret;
		ret = i + j;
		n--;
	}
	return ret;
}
int main()
{
	printf("%d %d\n", Fib1(10),Fib2(10));
	/*printf("%d\n", my_pow(2,3));*/
	/*char c[] = "abcdef";
	printf("%s\n",c);
	printf("%s\n", inv(c,0,strlen(c)-1));*/
	/*printf("%d %d\n", my_strlen1(c), my_strlen2(c));*/
	//print(1234);
	//printf("%d %d\n", rec1(5),rec2(5));

	return 0;
}