#include<stdio.h>
int main()
{
	int a[10],n,i;
	printf("enter size of array");
	scanf("%d",&n);
	printf("enter array values");
	for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
	printf("\ndisplay array values");
	for(i=0;i<n;i++)
	{
		printf(" \n%d %u %d",a[i],&a[i],i);
	}
	return 0;
}
