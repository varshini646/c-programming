#include<stdio.h>
int main()
{
	int i,ts,tn;
	printf("enter table number");
	scanf("%d",&tn);
	printf("enter table size");
	scanf("%d",&ts);
	for(i=1;i<=ts;i++)
	{
		printf("%d*%d=%d\n",i,tn,tn*i);
	}
	return 0;
}
