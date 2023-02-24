// Yeh array of linked list plg_hoon_mai.com

#include <bits/stdc++.h>
using namespace std;
struct node
{

    int data;
    node *next;

    void print()
    {
        cout << data << " -> " << next << endl;
    }
};

int main()
{
    node head[5] = {{5, &head[1]},
                    {6, &head[2]},
                    {7, &head[3]},
                    {8, &head[4]},
                    {9, NULL}};

    for (int i = 0; i < 5; i++)
    {
        head[i].print();
    }
}