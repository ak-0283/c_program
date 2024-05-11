// insert at beg

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next;
};
 struct node*Insertatstart(struct node*head,int data)
 {
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=head;
    head=ptr;
    return head;
 }
 void display(struct node*head)
 {
    struct node*p=head;
    while(p!=NULL)
    {
        printf("%d",p->data);
        p=p->next;
    }
 }
 int main()
 {
    struct node*head,*second,*third,*fourth;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    head->data=9;
    head->next=second;
    second->data=7;
    second->next=third;
    third->data=8;
    third->next=fourth;
    fourth->data=5;
    fourth->next=NULL;
    head=Insertatstart(head,4);
    display(head);
    return 0;
}