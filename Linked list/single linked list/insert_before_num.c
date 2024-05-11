//insert before num

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next;
};
struct node*insertbeforenum(struct node*head,int data,int num)
{
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    struct node*p=head;
    struct node*q=p;
    while(p->data!=num)
    {
        q=p;
        p=p->next;
    }
    ptr->data=data;
    q->next=ptr;
    ptr->next=p;
    return head;
}
void display(struct node*ptr)
{
    while(ptr!=NULL)
    {
        printf("%d",ptr->data);
        ptr=ptr->next;
    }
}
int main()
{
 int num;
 struct node*head,*second,*third,*fourth;
 head=(struct node*)malloc(sizeof(struct node));
 second=(struct node*)malloc(sizeof(struct node));
 third=(struct node*)malloc(sizeof(struct node));
 fourth=(struct node*)malloc(sizeof(struct node));
 head->data=8;
 head->next=second;
 second->data=7;
 second->next=third;
 third->data=0;
 third->next=fourth;
 fourth->data=5;
 fourth->data=5;
 fourth->next=NULL;
 printf("enter the data of the node after which a new node will be inserted: ");
 scanf("%d",&num);
 head=insertbeforenum(head,25,num);
 display(head);
 return 0;
}