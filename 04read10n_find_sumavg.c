#include<stdio.h>
int main()
{
	int i,a,sum,temp;
	float avg;
	printf("Input the 10 Number:\n");
	for(i=1;i<=10;i++)
	{
	scanf("%d",&a);
	sum=sum+a;
	}
	printf("The sum of value %d\n",sum);
	avg=sum/10;

	printf("The avarage is:%f\n",avg);
	return 0;
}
