//write  a program to find largest among three numbers
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the 3 nos:");
	scanf("%d %d %d",&a,&b,&c);
	if(a>=b && a>=c)
	{
		printf("%d is largest",a);
	}
	if(a<=b && c<=b)
	{
		printf("%d is largest",b);
	}
	if(c>=a && c>=b)
	{
		printf("%d is largest",c);
	}
	return 0;
}
