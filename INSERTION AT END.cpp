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
	//INSERTION OF NEW NODE AT END
	node*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nENTER THE DATA PART OF NODE ");
	scanf("%d",&val);
	newnode->data=val;
	newnode->next=NULL;
	node*temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=newnode;
	
	//TO PRINT THE NODES AFTER INSERTION AT END
	p=head;
	while(p!=NULL)
	{
		printf("\n%d",p->data);
		p=p->next;
	}
}
