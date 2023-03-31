#include<stdio.h>
int main()
{
	int i,a,b;
	printf("Input number of terms:\n");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		b=i*i*i;
		printf("%d and the cube of the %d is:%d\n",i,i,b);
	}
	return 0;
}


