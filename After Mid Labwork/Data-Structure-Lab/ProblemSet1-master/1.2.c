#include<stdio.h>
 typedef struct Node node;

struct Node
{
    int value;
     node *next;
};
int main ()
{
     node a,b,c;

    a.value=5;
    a.next=&b;
    b.value=6;
    b.next=&c;
    c.value=7;
    c.next=NULL;

    print(&a);
    print(&b);
    print(&c);



    return 0;
}
void print( node *x)
{
    printf("%p\t%d\t%p\n",x,x->value,x->next);
}
