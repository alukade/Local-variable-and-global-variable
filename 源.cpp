#include<stdio.h>

int main()
{
	int i = 520;

	printf("before i=%d\n", i);
	for (int i = 0; i < 10; i++)//for��������ı���ֻ��for����ʹ�ã���Ϊ�ֲ�������i=10ʱ�����㣬����i=9
	{
		printf("%d\n", i);
	}
	printf("after,i=%d\n", i);//ȥ��int i ��,i=10

	return 0;
}