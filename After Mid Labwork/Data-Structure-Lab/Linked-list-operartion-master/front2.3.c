#include<stdio.h>
#include<stdlib.h>

typedef struct Node node;
struct Node
{

    int value;
    node *next;

};
node *head =NULL;

int main()
{
    node a,b,c;
    head=&a;
    a.value=2;
    a.next=&b;
    b.value =3;
    b.next=&c;
    c.value=4;
    c.next=NULL;

    front(head);


    return 0;


}
void front(node *p)
{
    if(p==head)
    {
        printf("%d\n",p->value);
    }
}

