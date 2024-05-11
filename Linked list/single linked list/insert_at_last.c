// insert at last

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next;
};  

struct node*deleteatend(struct node*head)
{
    struct node*p=head;
    struct node*q=p;
    while(p->next!=NULL)
    {
        q=p;
        p=p->next;
    }
q->next=p->next;
free(p);
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
 struct node*head,*second,*third,*fourth;
 head=(struct node*)malloc(sizeof(struct node));
 second=(struct node*)malloc(sizeof(struct node));
 third=(struct node*)malloc(sizeof(struct node));
 fourth=(struct node*)malloc(sizeof(struct node));
 head->data=0;
 head->next=second;
 second->data=6;
 second->next=third;
 third->data=8;
 third->next=fourth;
 fourth->data=5;
 fourth->next=NULL;
 head=deleteatend(head);
 display(head);
 return 0;
}
