#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *top=NULL;
void push();
void display();
void pop();
void search();
void main()
{
	int a;
	do
	{

		printf("1.push  \n2.pop \n3.display \n4.search \n5.exit \n");
		printf("enter the choose \n");
		scanf("%d",&a);
		switch(a)
		{
			case 1:
			push();
			break;
			case 2:
			pop();
			break;
			case 3:
			display();
			break;
			case 4:
			search();
			break;
			case 5:
			return;	
		}
	}while(a!=5);
}
void push()
{
	struct node *ne;
	int x;
	printf("enter the value to be insert \n");
	scanf("%d",&x);
	ne=(struct node *)malloc(sizeof(struct node));
	if(ne==NULL)
	{
		printf("stack is overflow \n");
		return;
	}
	ne->data=x;
	ne->next=top;
	top=ne;
}
void display()
{
	struct node *ptr;
	ptr=top;
	if(ptr==NULL)
	{
		printf("stack is empty \n");
		return;
	}
	while(ptr!=NULL)
	{
		printf("%d \n",ptr->data);
		ptr=ptr->next;
	}
}
void pop()
{
	struct node *ptr;
	ptr=top;
	if(ptr==NULL)
	{
		printf("stack is empty \n");
		return;
	}
	printf(" deleting element is %d \n",top->data);
	top=top->next;
	free(ptr);
}
void search()
{
	struct node *ptr;
	ptr=top;
	int x,c=0;
	if(ptr==NULL)
	{
		printf("stack overflow\n");
		return;
	}
	printf("enter the value to be search\n");
	scanf("%d",&x);
	while(ptr!=NULL)
	{
		if(ptr->data==x)
		{
		printf(" element found \n");
		return;
		}
		else
		{
		c=1;
		}
	ptr=ptr->next;
	}
	if(c==1)
	{
		printf(" element not found \n");
	}
}

 



