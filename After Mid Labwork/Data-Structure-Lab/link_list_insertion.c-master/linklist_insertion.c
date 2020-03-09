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

    printf("Before inserting new node\n");
    print_all(head);
    insert_first(value);
    insert_last(value);

    printf("After inserting new node\n");
    print_all(head);

    return 0;

}
void insert_first(int value)
{
  node *p=(node*)malloc(sizeof(node));
    if(p == NULL)
    {
        printf("Unable to allocate memory.");
    }
else
    {
        p->value = 5;
        p->next = head;

        head = p;
    }
}
void insert_last(int value)
{


    node*q = (node*)malloc(sizeof( node));
    node*temp;

    if(q == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        q->value = 6; // Link the data part
        q->next = NULL;

        temp = head;

        // Traverse to the last node
        while(temp->next != NULL)
            temp = temp->next;

        temp->next = q; // Link address part

        printf("DATA INSERTED SUCCESSFULLY\n");
    }
}


