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
    n->next=head;
    head=n;
}

void insertAtTail(node* &head, int val)
{
    node* n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }

    node* temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
/*
void deletion(node* head, int val)
{
    node* temp=head;
    while (temp->next->data!=NULL)
    {
        temp=temp->next;
    }
    node* todelet=temp->next;
    temp->next=temp->next->next;
    delete todelet;
}
*/
void display(node* head)
{
    node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void length(node* head)
{
    int count=0;
    node* curr = head;
    while(curr != NULL)
    {
        count++;
        curr=curr->next;
        
    }

    cout<<count<<endl;
}

bool search(node* head, int key)
{
    node* temp=head;
    while (temp!=NULL)
    {
        if (temp->data==key)
        {
            return true;
        }
        temp=temp->next;
    }
    return false;
}

int main()
{
    node* head=NULL;

    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    length(head);
    display(head);
    // insertATHead(head,4);
    // display(head);
    // cout<<search(head,5)<<endl;
    // cout<<search(head,3)<<endl;

    return 0;
}