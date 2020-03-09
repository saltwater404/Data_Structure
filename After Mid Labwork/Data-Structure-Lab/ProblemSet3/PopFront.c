#include <stdio.h>


typedef struct Node node;


struct Node {
    int data;
    node* next;
};


node* removeFirstNode(struct Node* head)
{
    if (head == NULL)
        return NULL;


    node* temp = head;
    head = head->next;

    delete temp;

    return head;
}


void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node = new Node;
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}


int main()
{

    Node* head = NULL;


    push(&head, 12);
    push(&head, 29);
    push(&head, 11);
    push(&head, 23);
    push(&head, 8);

    head = removeFirstNode(head);
    for (Node* temp = head; temp != NULL; temp = temp->next)
        cout << temp->data << " ";

    return 0;
}
