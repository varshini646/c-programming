#include<stdio.h>
int main()
{
	int i,a,count=0;
	printf("enter a value");
	scanf("%d",&a);
	for(i=1;i<=a;i++);
		if(a%i==0)
		count=count++;
			if(count==2)
			printf("it is a prime");
			else
			printf("it is not a prime");
	return 0;
}
