#include<stdio.h>
#include<stdlib.h>

typedef struct Node node;
struct Node
{
    int value;
    node *next;

};
node *head = NULL;
int main()
{
    node *p = (node*)malloc(sizeof(node));
    node *q = (node*)malloc(sizeof(node));
    node *r = (node*)malloc(sizeof(node));
    node *s = (node*)malloc(sizeof(node));

    head=p;

    p->value = 5;
    p->next = q;

    q->value = 6;
    q->next = r;

    r->value = 7;
    r->next = s;

    s->value = 8;
    s->next = NULL;


    empty(head);
    return 0;
}
void empty(node *p)

{
    if(p==NULL)
    {

        printf("linked list is empty\n");
    }
    else
    {
        printf("linked list is not empty");
    }
    return 0;
}


