#include<iostream>
using namespace std;
int push(int stack[], int &top, int ele) //function to insert element
{
    const int size = 50;
    if(top == size-1)
    return 1;
    else{
        top++;
        stack[top]=ele;
    }
    return 0;

}

int pop(int stack[],int &top){
    int ret;
    if(top==-1){
        return -1;
    }
    else
    {
        ret=stack[top];
        top--;
    }
    return ret;
}

void display(int stack[],int top)
{
    if(top==-1)
    return ;
    cout<<stack[top]<<" <-- "<<endl;
    for(int i=top-1;i>=0;i--)
        cout<<stack[i]<<endl;
}
int main()
{
    const int size = 50;
    int stack[size],item, top = -1,res;
    char ch = 'y';
    system("cls");
    while(ch=='y'|| ch=='Y'){
        cout<<"\nEnter item for instertion : ";
        cin>>item;
        res=push(stack,top,item);
        if (res==-1)
        {
            cout<<"OVERFLOW!!\n";
            exit(1);
        }
        cout<<"\n The stack now is : \n";
        display(stack,top);
        cout<<"\nWant to insert more element? (y/n)....";
        cin>>ch;
    }
    cout<<"\nNow Deletion of element begins....\n";
    ch='y';
    while(ch=='y'|| ch=='Y'){
        res=pop(stack,top);
        if (res==-1)
        {
            cout<<"UNDERFLOW!!\n";
            exit(1);
        }
        else
        {  
            cout<<"\nElement deleted is : "<<res<<endl;
            cout<<"\n The stack now is : \n";
            display(stack,top);
        }
        cout<<"\nWant to insert more element? (y/n)....";
        cin>>ch;
    }
    return 0;
}