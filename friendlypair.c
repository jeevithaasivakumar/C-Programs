//14.Write a program to find if the given numbers are Friendly pair or
//not (Amicable or not)
//❑Algorithm:
//▪ Input the numbers (n1 and n2)
//▪ Initialize s1=s2=0
//▪ s1=Sum of all divisors of n1
//▪ s2=Sum of all divisors of n2
//▪ If ((s1/n1) == (s2/n2)), then print ‘Friendly pair

#include<stdio.h>
int main(){
	int n1,n2,i,s1=0,s2=0;
	printf("Enter the two numbers:");
	scanf("%d%d",&n1,&n2);
	for(i=1;i<n1;i++){
		if(n1%i==0)
		s1 += i;
}
for(i=1;i<n2;i++){
		if(n2%i==0)
		s2 += i;
}
if(s1/n1==s2/n2)
printf("Its a frinedly pair ");
else
printf("not a frinedly pair");
}