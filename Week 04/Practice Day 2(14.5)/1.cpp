#include <bits/stdc++.h>

using namespace std;

class node 
{
public:
      int data;
      node * nxt;
      node * prv;
};

class DoublyLinkedList
{
public:
     node * head;
     DoublyLinkedList()
     {
        head=NULL;
     }

     node * CreateNewNode(int value)
     {
        node * newnode=new node;
        newnode->data=value;
        newnode->nxt=NULL;
        newnode->prv=NULL;
        return newnode;
     }

     void InsertAtHead(int value)
     {
        node * a=CreateNewNode(value);
        if(head==NULL)
        {
            head=a;
            return;
        }
        a->nxt=head;
        head->prv=a;
        head=a;
     }

     void Travers()
     {
        node * a=head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a=a->nxt;
        }
        cout<<"\n";
     }
};

int main()
{
    DoublyLinkedList dl;
    dl.InsertAtHead(5);
    dl.InsertAtHead(4);
    dl.InsertAtHead(3);
    dl.InsertAtHead(2);
    dl.InsertAtHead(1);
    dl.InsertAtHead(0);
    dl.Travers();
    return 0;
}

