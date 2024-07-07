#include<stdio.h>
void insertion_sort (int a[], int N)
{
	int i ,j,temp;
	for(i=1;i<N;i++)
	{
		temp=a[i];
		for(j=i-1;j>=0 &&temp<a[j];j--)
	{
			a[j+1]=a[j]; 
		a[j]= temp;
	}
	}
}
int main()
{
	
	int N,i,a[50];
	printf("enter the size of an array\n");
	scanf("%d",&N);
	printf("enter the element in the array \n");
	for(i=0;i<N;i++)
	scanf("%d",&a[i]);
	insertion_sort(a,N);
	printf("insertion sort");
	for(i=0;i<N;i++)
	printf(" %d",a[i]);
	
}

