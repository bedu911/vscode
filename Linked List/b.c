#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
};
struct node *create(int n)
{
    struct node *head=0;
    struct node *temp=0;
    for(int i=0;i<n;i++)
    {
        struct node *newnode;
        newnode=(struct node *)malloc(sizeof(struct node));
        prinf("Enter the Data For Node[%d]=",i);
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0)
        {
            head=newnode;
        }else{
            temp->next=newnode;
        }
        temp=newnode;
    }
    return head;
}
int main()
{
int n;
printf("Enter the Number of Nodes To be Created:");
scanf("%d",&n);
struct node *head=create(n);
return 0;
}