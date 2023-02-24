#include<iostream>
using namespace std;

class Node 
{
    public:
    int data;
    Node* next;
};

//length of linked list (Iterative and recursive) method
void length(Node* head)
{
    int count=0;
    while(head != NULL)
    {
        count++;
        head=head->next;
        
    }

    cout<<count<<endl;
}
// time complexity = O(n)
// auxiliary space = O(1) 

// using recursion
int getCount(Node* head)
{
    if(head==NULL)
    return 0;
    else
    return 1 + getCount(head->next);
}
// time complexity = O(n)
// auxiliary space = O(n)

//using tail recursion for decreasing space

int getCountTail(Node* head,int count = 0)
{
    if(head==NULL)
    return count;
    else
    return getCountTail(head->next,count+1);
}
// time complexity = O(n)
// auxiliary space = O(n)

void printList(Node* &head)
{
    int count=0;
    while(head != NULL)
    {
        cout<<head->data<<"->";
        count++;
        head=head->next;
    }
    cout<<"NULL"<<endl;
    cout<<"length of linked list :--"<<" "<<count<<endl;
}

int main()
{
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    //allocate 3 node in the heap
    head =new Node();
    second =new Node();
    third =new Node();

    /* Three blocks have been allocated dynamically.
    We have pointers to these three blocks as head,
    second and third    
    head         second         third
        |             |             |
        |             |             |
    +---+-----+     +----+----+     +----+----+
    | # | # |     | # | # |     | # | # |
    +---+-----+     +----+----+     +----+----+
     
    # represents any random value.
    Data is random because we haven’t assigned
    anything yet */
  
    // cout<< head->data<<endl;
    // cout<< second->data<<endl;
    // cout<< third->data<<endl;

    head->data= 1;// assign data in first node
    head->next= second;// Link first node with second node

    second->data= 2;// assign data in first node
    second->next= third;// Link first node with second node

    third->data= 3;// assign data in first node
    third->next= NULL;// Link first node with second node
    // cout<< head->data<<endl;
    // cout<< second->data<<endl;
    // cout<< third->data<<endl;
    
    length(head);
    cout<<"count of node :--  "<<getCount(head)<<endl;
    cout<<"count of node :--  "<<getCountTail(head)<<endl;
    printList(head);
    

    return 0;
    
}





