#include<stdio.h>

typedef struct Node node;
void print_all(node *p);

struct Node
{

    int value;
    node *next;

};
node *head =NULL;

int main()
{
    node a,b,c;
    head =&a;
    a.value=2;
    a.next=&b;
    b.value =3;
    b.next=&c;
    c.value=4;
    c.next=NULL;
    printf("\n Before\n");
    print_all(head);
    printf("\n After\n");
    print_reverse(head);
    return 0;


}
void print_all(node *p)
{
    if(p==NULL)
    {
        printf("List is empty\n");
    }

    while(p!=NULL)
    {


        printf("%d\t",p->value);
        p=p->next;
    }

}
print_reverse(node *p)
{
    if(p==NULL)
    {
        return ;
    }
    else
    {
        print_reverse(p->next);
        printf("%d\t",p->value);
    }
}


