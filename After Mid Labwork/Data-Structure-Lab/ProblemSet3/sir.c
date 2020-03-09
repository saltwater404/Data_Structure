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
    node*head=NULL;
    a->v=5;
    a->next=b;
    c->v=7;
    c->next=NULL;
    head=a;
    print(a);
    printf("\n");
    print_reverse(a);
    printf("\n %d \n",size(head));
}
void print(node*x)
{
    if(x==NULL) printf("Linked list is Enpty");
    while(x!=NULL)
    {
        printf("%d",x->v);
        x=x->next;
    }
}
void print_reverse(node*x)
{
    if(x==NULL)
        return;
    print_reverse(x->next);
    printf("%d",x->value);
}
int is_empty(node*x)
{
    if(x==NULL)
        return 1;
    return 0;
}
int size(node *x)
{
    int count=0;
    while(x)
    {
        count++;
        x=x->next;
    }
    return count;
}
int front(node*x)
{
    if(x==NULL)
    {
        printf("Linked list is Empty");
        return ;
    }
    return x->v;
}
int back(node*x)
{
    if(x==NULL)
    {
        printf("Linked list is Empty");
        return;
        while(x->next !=NULL)
            x=x->next;
    }
    return x->value;
}
