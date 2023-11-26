#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	node*next;
};
int main()
{
	int val,n;
	node*p,*q,*head;
	printf("\nENTER THE NUMBER OF NODES TO BE CREATED: ");
	scanf("%d",&n);
	printf("\nENTER THE VALUE OF HEAD: ");
	scanf("%d",&val);
	
	q=(struct node*)malloc(sizeof(struct node));
	q->data=val;
	q->next=NULL;
	head=q;
	int i;
	for(i=1;i<n;i++)
	{
		printf("\nENTER THE VALUE OF NODE: ");
		p=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&val);
	p->data=val;
	p->next=NULL;
	q->next=p;
	q=q->next;
	}
	q=head;
	while(q!=NULL)
	{
		printf("\n%d",q->data);
		q=q->next;
	}
	//INSERT A NODE AT BEGINNING
	node*newnode;
	newnode=(struct node*)malloc (sizeof(struct node));
	printf("\nENTER THE DATA PART OF NEW NODE: ");
	scanf("%d",&val);
	newnode->data=val;
	newnode->next=head;
	head=newnode;
	
	q=head;
	while(q!=NULL)
	{
		printf("\n%d",q->data);
		q=q->next;
	}
	
	
}

