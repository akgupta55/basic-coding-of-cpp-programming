#include<iostream>
using namespace std;


class Node
{
public:
    int data;
    Node* next;

    Node(int val) // construct node
    {
        data = val;
        next = NULL;
    }
};

int getMiddle(Node *head)
    {
        // Your code here
        Node* slow=head;
        Node* fast=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow->data;
    }


class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        struct Node *cur,*prev, *next;
        cur=head;
        prev=NULL;
        while(cur!=NULL)
        {
            next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
        }
        head=prev;
        return head;
    }
    
};

int main()
{
    Node* head=NULL;

    return 0;
}