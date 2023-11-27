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
	node*p,*q;
	node*temp=NULL;
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
	p=temp;
	while(p!=NULL)
	{
		printf("%d",p->data);
		p=p->next;
	}

	
	//TO INSERT NODE AT POSITION
	int pos;
	printf("\nENTER THE POSITION AT WHICH NODE IS TO BE INSERTED: ");
	scanf("%d",&pos);
	node*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
		printf("\nENTER THE DATA PART OF NODE: ");
	scanf("\n%d",&val);
	node*prev1=temp;
	node*temp1=temp;
	for(int i=0;i<n;i++)
	{
		prev1=temp;
		temp1=temp1->next;
	}
	newnode->prev=prev1;
	newnode->next=temp1;
	prev1->next=newnode;
	temp1->prev=newnode;

	
	
	//TO PRINT A DOUBLY LINKED LIST AFTER INSERTION OF NEW NODE AT END
	printf("\nTHE LINKED LIST AFTER INSERTION OF NODE AT POSITION IS: ");
	p=temp;
	while(p!=NULL)
	{
		printf("%d",p->data);
		p=p->next;
	}
	
	
	
}
