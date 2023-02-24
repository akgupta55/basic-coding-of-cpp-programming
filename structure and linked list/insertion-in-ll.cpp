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

// play with pointers maja aayega if you know pointers and pointers of pointers
//  (method 1) by using head ----danger
node *push1(node *head, int newData)
{
    node *newNode = new node();
    newNode->data = newData;
    newNode->next = head;
    head = newNode;

    return head;
}

// (method 2) by making or using head reference
void push2(node **head_ref, int newData)
{
    //*(*head_ref) means head addres of head
    // and *head_ref means addres of node
    node *newNode = new node();
    newNode->data = newData;
    newNode->next = *head_ref;
    *head_ref = newNode;
}

/*------- Insertion of linked list at middle --------*/
void atmiddle(node *perv_node, int newData)
{
    node *newNode = new node();
    newNode->data = newData;
    newNode->next = perv_node->next;
    perv_node->next = newNode;
}

/*------- Insertion of linked list at end --------*/
void append(node **head_ref, int newData)
{
    node *newNode = new node();
    newNode->data = newData;
    newNode->next = NULL;

    if (*head_ref == NULL)
    {
        *head_ref = newNode;
        return;
    }
    node *last = *head_ref;

    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = newNode;
    return;
}

int main()
{
    node *head = NULL;
    // method 1
    head = push1(head, 8);
    // method 2
    push2(&head, 7);
    push2(&head, 5);
    push2(&head, 33);
    atmiddle(head->next->next, 22);
    append(&head, 76);
    printList(head);
}