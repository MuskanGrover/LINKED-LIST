#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	node*next;
};
int main()
{
	int n,val;
	node*p,*q,*head;
	printf("\nENTER THE TOTAL NUMBER OF NODES");
	scanf("%d",&n);
	printf("\nENTER THE DATA PART OF NODE ");
	scanf("%d",&val);
	
	p=(struct node*)malloc(sizeof(struct node));
	p->data=val;
	p->next=NULL;
	head=p;
	for(int i=1;i<n;i++)
	{
		q=(struct node*)malloc(sizeof(struct node));
		printf("\nENTER THE DATA PART OF NODE ");
	scanf("%d",&val);
	q->data=val;
	q->next=NULL;
	p->next=q;
	p=p->next;
	}
	p=head;
	while(p!=NULL)
	{
		printf("\n%d",p->data);
		p=p->next;
	}
	//INSERTION OF NEW NODE AT POSITION
	int pos;
	node*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nENTER THE DATA PART OF NODE ");
	scanf("%d",&val);
	printf("\nENTER THE POSITION WHERE NODE IS TO BE INSERTED  ");
	scanf("%d",&pos);
	newnode->data=val;
	node*prev=head;
	node*temp=head;
	for(int i=0;i<pos;i++)
	{
		prev=temp;
		temp=temp->next;
	}
	newnode->next=temp;
	prev->next=newnode;
	//TO PRINT THE NODES AFTER INSERTION AT POSITION
	p=head;
	while(p!=NULL)
	{
		printf("\n%d",p->data);
		p=p->next;
	}
}
