#include<stdio.h>
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
    head=&c;
    a.value=2;
    a.next=&b;
    b.value =3;
    b.next=&c;
    c.value=4;
    c.next=NULL;

    back(head);


    return 0;


}
void back(node *p)
{
    if(p==head)
    {
        printf("%d\n",p->value);
    }
}


