#include<stdio.h>
int main()
{
	int a,b,c;
	char ch;
	printf("enter a and b value");
	scanf("%d%d",&a,&b);
	printf("enter any choice add+,sub-,mult*,div/");
	scanf(" %c",&ch);
	switch(ch)
	{
		case '+':c=a+b;
				 printf("add=%d",c);
				 break;
		case '-':c=a-b;
				 printf("sub=%d",c);
				 break;
		case '*':c=a*b;
				 printf("mult=%d",c);
				 break;
		case '/':c=a/b;
				 printf("div=%d",c);
				 break;
		default:printf("invalid choice");		 		 		 		 
	}
	return 0;
}
