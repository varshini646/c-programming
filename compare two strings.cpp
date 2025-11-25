#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20],s2[20];
	int l1,l2,i,flag=0;
	printf("enter s1 and s2 names");
	scanf("%s%s",s1,s2);
	for(i=0;s1[i]!='\0';i++);
	l1=i;
	for(i=0;s2[i]!='\0';i++);
	l2=i;
	if(l1==l2)
	{
		for(i=0;s1[i]=!'\0';i++)
		{
			if(s1[i]!=s2[i])
			{
				flag=1;
				break;
			}
		}
	}
	if(flag==0)
	{
		printf("string are not equal");
	}
		else
	{
		printf("string are equal");
	}
	return 0;
}
