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
    head = p;

    p->value = 2;
    p->next = q;

    q->value = 3;
    q->next = r;

    r->value = 7;
    r->next = NULL;

    print_all(head);
    return 0;
}

void print_all(node *p)

{
    if(p==NULL)
    {

        printf("linked list is empty\n");
        return 0;
    }
    while(p)
    {
        printf("%p\t %d\t %p\n",p,p->value,p->next);
        p = p->next;


    }
}
