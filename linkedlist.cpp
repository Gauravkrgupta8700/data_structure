#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
	int info;
	struct node *link;
};
struct node *start=NULL;
struct node * create_node()
{
	struct node *n;
	n=(struct node*)malloc(sizeof(struct node));
	return(n);
 }
 void insert_node()
 {
 	struct node *temp,*t;
 	temp=create_node();
 	printf("enter a number");
 	scanf("%d",&temp->info);
 	temp->link=NULL;
 	if(start==NULL)
 	start=temp;
 	else
 	{
 	t=start;
 	while(t->link!=NULL)
 	t=t->link;
 	t->link=temp;
 }
 }
 void delete_node()
 {
 	struct node *r;
     if(start==NULL)
     printf("list is empty");
     else
     r=start;
     start=start->link;
     free(r);
     }
     void view_list()
     {	struct node *t;
     	if(start==NULL)
     	printf("list is empty");
     	else
     	{
		 t=start;
     	while(t!=NULL)
     	{
     		printf("  %d",t->info);
     		t=t->link;
     }
		 }
	 }
	 int menu(){
	 	int ch;
	 	printf("\n 1 add value in the list");
	 		printf("\n 2 delete value in the list");
	 			printf("\n 3 view value in the list");
	 				printf("\n 4 exit");
	   scanf("%d",&ch);
	   return ch;
	 }
	 int main ()
	 {
	 	while(1)
	 	{
	 		switch(menu())
	 		{
	 			case 1: insert_node();
	 			break;
	 			case 2: delete_node();
	 			break;
	 			case 3: view_list();
	 			break;
	 			case 4: exit(0);
	 			default:
	 				printf("invalid choice");
	 			}
		 }
	return 0;
	 }
