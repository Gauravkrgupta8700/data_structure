#include<stdio.h>
int min(int a[],int i, int n)
{
	int j, loc, mini;
	mini=a[i];
	loc=i;
	for(j=i+1;j<n;j++)
	if(mini>a[j])
{    mini= a[j];
loc=j;

}
return {loc};
}
int main()
{
	int a[50], i, n ,loc,temp;
	printf("\n enter the size of an array\n");
	scanf("%d",&n);
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
{
	loc=min(a,i,n);
	temp=a[i];
	a[i]=a[loc];
	a[loc]= temp;
}
			printf("sorted elements\n");
		for(i=0;i<n;i++)
		printf(" %d",a[i]);

}

