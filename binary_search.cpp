#include<stdio.h>
int main()
{
    int n,i,a[50], beg=0,mid, end, item;
    printf("enter the no of  element you want to store in an array\n");
      scanf("%d",&n);
      printf("enter the element in sorted form\n");
      for(i=0;i<n;i++)
	  {
      	scanf("%d",&a[i]);
}
	printf("enter the elemnets you want to search\n");
    scanf("%d",&item);
    end=n-1;
    mid= (beg+end)/2;
    while(beg<=end &&a[mid]!=item)
    {   
        if(a[mid]<item)
        beg= mid+1;
        else
        end=mid-1;
        mid=(beg+end)/2;
}
   if(a[mid]==item)
    printf("element found at location %d ", mid+1);
return 0;
}
