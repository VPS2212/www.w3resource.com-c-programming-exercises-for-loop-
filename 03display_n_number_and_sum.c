#include<stdio.h>
int main()
{
	int i,a;
	printf("the natural number is\n");
	for(i=1;i<=7;i++)
	{
		printf("%d",i);
		a=i+a;
	}
	printf("\nthe sum of natural number upto 7 terms:%d\n",a);
	return 0;
}
