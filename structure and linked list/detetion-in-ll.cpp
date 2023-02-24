#include <bits/stdc++.h>
using namespace std;

/*------- Linked list of a node --------*/
struct node
{
    int data;
    node *next;
};

/*------- Printing of linked list --------*/
void printList(node *n)
{
    while (n != NULL)
    {
        cout << n->data << endl;
        n = n->next;
    }
}

/*------- Insertion of linked list at first or front --------*/
void push2(node **head_ref, int newData)
{
    node *newNode = new node();
    newNode->data = newData;
    newNode->next = *head_ref;
    *head_ref = newNode;
}

/*------- Deletion of linked list  --------*/
void deleteLL(node **head_ref, int key)
{
    node *temp = *head_ref, *perv;

    if (temp != NULL && temp->data == key)
    {
        *head_ref = temp;
        free(temp);
        return;
    }

    while (temp != NULL && temp->data != key)
    {
        perv = temp;
        temp = temp->next;
    }

    if (temp == NULL)
        return;

    perv->next = temp->next;
    free(temp);
}

int main()
{
    node *head = NULL;
    push2(&head, 7);
    push2(&head, 5);
    push2(&head, 33);

    deleteLL(&head, 5);

    printList(head);
}