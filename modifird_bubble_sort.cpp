#include<stdio.h>
void bubble_sort(int a[],int N)
{
	int round,i,temp,flag;
	for(round=1;round<=N-1;round++)
	{
	flag=0;
	for(i=0;i<=N-1-round;i++)
	{
		if(a[i]>a[i+1])
		{
		flag=1;
		temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
	}
	if(flag=0)
	{
		printf("round= %d\n",round);
		return ;
	}
	}
}
}
int main ()
{
	int N,i,a[50];
	printf("enter the size of an array\n");
	scanf("%d",&N);
	printf("enter the element in the array \n");
	for(i=0;i<N;i++)
	scanf("%d",&a[i]);
	bubble_sort(a,N);
	printf("bubble sort");
	for(i=0;i<N;i++)
	printf(" %d",a[i]);
	
}
