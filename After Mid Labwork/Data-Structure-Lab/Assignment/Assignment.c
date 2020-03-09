#include<stdio.h>
#include<stdlib.h>
typedef struct Node node;
struct Node
{
    int value;
    node *next;
};
node *head;
void display();
void insert_last();
void insert_first();
void delete_last();
void delete_first();
void delete_in_position(int pos);
void clear();


int main()
{
    int op;
    node *a=(node*)malloc(sizeof(node));
    node *b=(node*)malloc(sizeof(node));
    node *c=(node*)malloc(sizeof(node));
    node *d=(node*)malloc(sizeof(node));
    node *e=(node*)malloc(sizeof(node));

    head=a;

    a->value=1;
    a->next=b;

    b->value=2;
    b->next=c;

    c->value=3;
    c->next=d;
    d->value=4;
    d->next=e;

    e->value=5;
    e->next=NULL;

    while(1)
    {
        printf("\nSelect Linked List operation :\n\n");
        printf("1.Display list\n");
        printf("2.Insert in last\n");
        printf("3.Insert in first\n");
        printf("4.delete in last\n");
        printf("5.delete in first\n");
        printf("6.delete in  n position\n");
        printf("7.clear list\n");
        printf("8.End the operation\n\n");
       printf("\nEnter your choise:");
       scanf("%d",&op);
       if (op==1)
       {
           display();

       }
       else if(op==2)
       {
           insert_last();
       }
   else  if(op==3)
       {
           insert_first();
       }
       else if(op==4)
       {
           delete_last();
       }
        else  if(op==5)
      {
           delete_first();
         }
       else if(op==6)
       {
           int x;
           printf("\nEnter position for delete :");
           scanf("%d",&x);
           delete_in_position(x);

       }

       else if(op==7)
       {
           //clear();
       }
      else  if(op==8)
       {
           exit(0);
       }
       else
       {
           printf("Wrong Input.Try Again!!\n");
       }

    }

    return 0;
}
void display()
{
    printf("List is ");
    if(head==NULL)
    {
        printf("empty\n");
    }
    node *temp=head;

    while(temp!=NULL)
    {
        printf("%d ",temp->value);
        temp=temp->next;

    }
}


void insert_first()
{
    node *temp;

        temp=(node *)malloc(sizeof( node));
        if(temp==NULL)
        {
                printf("\nOut of Memory Space\n");
                return;
        }
        printf("\nInsert in first : " );
        scanf("%d",&temp->value);
        temp->next =NULL;
        if(head==NULL)
        {
                head=temp;
        }
        else
        {
                temp->next=head;
                head=temp;
        }
}

void insert_last()
{
    node *temp;
    temp=(node *)malloc(sizeof(node));
    printf("Enter node data: ");
    scanf("%d",&temp->value);
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        node *list=head;
        while(list->next!=NULL)
        {
            list=list->next;
        }
        list->next=temp;
    }
}
void delete_first()
{
    if(head==NULL)
    {
        printf("Under Flow\n");
        return;
    }
    node *temp=head;
    head=head->next;
    free(temp);
}
void delete_last()
{
    if(head->next==NULL)
    {
        free(head);
        head=NULL;
        return;
    }
    node *temp=head;
    while(temp->next->next)
    {
        temp=temp->next;
    }
    free(temp->next);
    temp->next=NULL;
}
void delete_in_position(int pos)
{
    if(head==NULL)
    {
        printf("List is empty\n");
        return ;
    }
    node *temp=head,*prev;
    int i=0;
    if(pos==1)
    {
        head=head->next;
        free(temp);
        return;
    }
    i=1;
    while(temp->next!=NULL)

    {
        prev=temp;
        temp =temp->next;
        i++;
        if(pos==i)
        {
            prev->next=temp->next;
            free(temp);
            return ;
        }
    }
    printf("Index out of range\n");
    }


