#include<stdio.h>
#include<stdlib.h>
struct node
{
	node*prev;
	int data;
	node*next;
};
struct node*createanode(struct node*head,int val)
{
	struct node*temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->prev=NULL;
	temp->data=val;
	temp->next=NULL;
	head=temp;
	return head;
	
}
int main()
{
	node*head=NULL;
	head =createanode(NULL,45);
	printf("%d",head->data);
	return 0;
}
