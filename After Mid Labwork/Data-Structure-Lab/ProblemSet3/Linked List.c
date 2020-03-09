#include<stdio.h>
#include<stdlib.h>
typedef struct Node node;
struct Node
{
    int v;
    node*next;
};
int main()
{
    node *a=(node*)malloc(sizeof(node));
    node *b=(node*)malloc(sizeof(node));
    node *c=(node*)malloc(sizeof(node));
    node *d=(node*)malloc(sizeof(node));
    node*head=NULL;
    a->v=5;
    a->next=b;
    b->next=c;
    d->v=8;
    c->next=NULL;
    head=a;
    print(a);
    printf("\n");

}
