#include <bits/stdc++.h>
using namespace std;

/*------- Printing of linked list --------*/
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

int main()
{
    node *head = new node();
    node *second = new node();
    node *third = new node();

    head->data = 5;
    head->next = second;

    second->data = 3;
    second->next = third;

    third->data = 8;
    third->next = NULL;

    printList(head);
}