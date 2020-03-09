#include<stdio.h>
#include<stdlib.h>
typedef struct Node node;
struct Node
{
    int value;
    node*next;
};
node*head=NULL;
int main()
{
    node *a=(node*)malloc(sizeof(node));
    node *b=(node*)malloc(sizeof(node));
    node *c=(node*)malloc(sizeof(node));
    node *d=(node*)malloc(sizeof(node));

    head=a;

    a->value=1;
    a->next=b;

    b->value=2;
    b->next=c;

    c->value=3;
    c->next=d;

    d->value=4;
    d->next=NULL;

    printf("Before deletion\n");
    print_all(head);
    delete_first_value(head);
    delete_last_value( head);

    printf("After deletion\n");
    print_all(head);

    return 0;
}
void print_all(node *x)

{
    if(x==NULL)
    {

        printf("linked list is empty\n");
        return 0;
    }
    while(x)
    {
        printf("%p\t %d\t %p\n",x,x->value,x->next);
        x = x->next;


    }
}

void delete_first_value()
{

    node *temp;
    temp=head;
    head=head->next;
    free(temp);

}
node*temp;node*second_last;
void delete_last_value( node*x)
{
    temp=head;
    second_last=head;
    while(temp->next != NULL)
        {
            second_last = temp;
            temp = temp->next;
        }

        if(temp == head)
        {
            head = NULL;
        }
        else
        {
            second_last->next = NULL;
        }

}

