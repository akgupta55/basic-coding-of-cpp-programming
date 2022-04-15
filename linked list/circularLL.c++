#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node* next;

    node(int val) // construct node
    {
        data = val;
        next = NULL;
    }
};

void insertATHead(node* &head, int val)
{
    node* n = new node(val);
if (head==NULL)
{
    n->next=n;
    head=n;
    return;

}


    node* temp=head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;

}

void insertAtTail(node* &head, int val)
{
    node* n = new node(val);
    if (head == NULL)
    {
        insertATHead(head,val);
        return;
    }

    node* temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next=head;
}

// void deletion(node* head, int val)
// {
//     node* temp=head;
//     while (temp->next->data!=head)
//     {
//         temp=temp->next;
//     }
//     node* todelet=temp->next;
//     temp->next=temp->next->next;
//     delete todelet;
// }

void display(node* head)
{
    node* temp=head;
    do
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }while(temp!=head);
    cout<<"NULL"<<endl;
}


int main()
{
    node* head=NULL;

    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    display(head);
    insertATHead(head,4);
    display(head);
    return 0;
}