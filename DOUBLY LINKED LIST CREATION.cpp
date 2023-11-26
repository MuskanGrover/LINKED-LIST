#include<stdio.h>
#include<stdlib.h>
struct node
{
	node*prev;
	int data;
	node*next;
};
int main()
{
	int n,val;
	node*p,*q,*head,*temp;
	printf("\nENTER THE TOTAL NUMBER OF NODES: ");
	scanf("%d",&n);
	printf("\nENTER THE DATA PART OF NODE: ");
	scanf("%d",&val);
	p=(struct node*)malloc(sizeof(struct node));
	p->prev=NULL;
	p->data=val;
	p->next=NULL;
	temp=p;
	for(int i=1;i<n;i++)
	{
		q=(struct node*)malloc(sizeof(struct node));
		printf("\nENTER THE DATA PART OF NODE: ");
	scanf("\n%d",&val);
		q->prev=temp;
	q->data=val;
	q->next=NULL;
	temp->next=q;
	temp=temp->next;
	}
	//TO PRINT A DOUBLY LINKED LIST
	temp=p;
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}
	
}
