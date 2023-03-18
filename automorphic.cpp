#include<stdio.h>
int main()
{
	int n,r,q,sum,j;
	n=5776;
	r=q=n;
	r=r/10;        //5776/10 = 577
	q=q%10;        //5776%10 = 6
	j = q;		   //6
//	if(q == n)
//	{
//		printf("%d is an automorphic number");
//	}
//	else
//	{
		while(r>0)
		{
			q = r;      //577  57
			q = q%10;   //7    7
			r = r/10;   //57   5
			sum = (q*10 + j);//
			printf("%d\n",sum); 
			j=sum;
			//sum=0;
		}
		
		printf("%d\n",j);
}