#include<stdio.h>
void bubble_sort(int a[], int n)
{
	int i, round,temp;
	for(round=1;round<n;round++)// for round
		for(i=0;i<n;i++)   // for comparison
	
		if(a[i]>a[i+1])
	{	temp=a[i];
	a[i]=a[i+1];
	a[i+1]=temp;
		
		}	
	
}
int main()
{
	int a[50], i, n ;
	printf("\n enter the size of an array\n");
	scanf("%d",&n);
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	bubble_sort(a,n);
		printf("sorted elements\n");
		for(i=0;i<n;i++)
		printf("  %d",a[i]);

}
