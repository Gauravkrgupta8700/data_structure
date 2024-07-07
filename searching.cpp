#include<stdio.h>
int main()
{
	int a[50],i,item,m ,flag=1;
	printf("enter no of  element you want to enter \n");
	scanf("%d",&m);
	printf("enter element of array\n");
	for(i=0;i<m;i++)
	scanf("%d",&a[i]);
	printf("enter element you want to search\n");
	scanf("%d",&item);
		for(i=0;i<m;i++)
{
	if (a[i]==item)
	{
	printf("\t element found at location %d\n",i+1);
	flag=0;
	
    printf("search successful\n");
    }
}
	if(flag==1)
{
	    printf("search unsuccessful\n");
    printf("element does no exist in the array\n");
}
	return 0;
}
