#include<iostream>
using namespace std;

class node
{
    public :
    int data;
    node* next;
    node* perv;

    node(int val)
    {
        data=val;
        next=NULL;
        perv=NULL;
    }
};

void insertAtHead(node* &head, int val)
{
    node* n=new node(val);
    n->next=head;
    if (head!=NULL)
    {
        head->perv=n;
    }

   head=n;
    
}

void insertAtTail(node* &head, int val)
{

    node* n=new node(val);
    if (head==NULL)
    {
        insertAtHead(head,val);
        return;
    }
    
    node* temp=head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->perv=temp;
}

void deleteAtHead(node* &head){
    node* todelete=head;
    head=head->next;
    head->perv=NULL;

    delete todelete;
}

void deletion(node* &head, int pos)
{
    if (pos==1)
    {
        deleteAtHead(head);
        return;
    }
    node* temp=head;
    int count=1 ;
    while (temp!=NULL && count!=pos)
    {
        temp=temp->next;
        count++;
    }
    temp->perv->next=temp->next;
    if (temp->next!=NULL)
    {
        temp->next->perv=temp->perv;
    }

    delete temp;
}

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
int main()
{
    node* head=NULL;

    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    display(head);
    insertAtHead(head,4);
    display(head);
    deletion(head,3);
    display(head);
    return 0;
}