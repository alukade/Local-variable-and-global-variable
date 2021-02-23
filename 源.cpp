#include<stdio.h>

int main()
{
	int i = 520;

	printf("before i=%d\n", i);
	for (int i = 0; i < 10; i++)//for（）里面的变量只能for里面使用，即为局部变量，i=10时不满足，所以i=9
	{
		printf("%d\n", i);
	}
	printf("after,i=%d\n", i);//去掉int i 后,i=10

	return 0;
}