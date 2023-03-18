//Write a program to print first half of an array in ascending order
//and second half in descending order


#include<stdio.h>
int asdec(int a[],int n)
{
	int temp;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n/2;j++){
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
			
		}
		for(int j=n/2;j<n-1;j++){
		
		if(a[j]<a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
			}
		
	}
	for(int i=0;i<n;i++)
		printf(" %d",a[i]);
}
int main()
{
	int a[]={4,3,2,1,10,20,30,40};
	int len=sizeof(a)/sizeof(a[0]);
	asdec(a,len);
}