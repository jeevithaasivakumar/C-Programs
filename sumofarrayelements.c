//Write a program to calculate the sum of elements in an array
#include<stdio.h>
int main(){
	int a[]={1,23,54,0,26,12};
	int sum=0;
	int len=sizeof(a)/sizeof(a[0]);
	for(int i=0;i<len;i++)
	{
		sum = sum+a[i];
	}
	printf("sum : %d",sum);
}