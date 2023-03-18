//write a program to add two fractions
#include<stdio.h>
int main()
{
	int i,j,n1,n2,d1,d2,k,gcd;
	printf("Enter the 1st numerator:");
	scanf("%d",&n1);
	printf("Enter the 1stdenominator:");
	scanf("%d",&d1);
	printf("Enter the 2nd numerator:");
	scanf("%d",&n2);
	printf("Enter the 2nd denominator:");
	scanf("%d",&d2);
	i=n1*d2+n2*d1;
	j=d1*d2;
	for(k=1;k<=i && k<=j;k++)
	{
		if(i%k==0 && j%k==0)
		gcd=k;
	}
	printf("final fraction is %d / %d",i/gcd,j/gcd);
	return 0;
}