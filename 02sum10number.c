#include<stdio.h>
int main()
{
	int i,a=0;
	for(i=1;i<=10;i++)
	{
	a=i+a;
	}
	printf("a=%d\n",a);
	return 0;
}

