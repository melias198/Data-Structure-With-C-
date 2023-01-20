#include <bits/stdc++.h>

using namespace std;

class node
{
    public:
    int data;
    node * next;
};

class SinglyLinkedList
{
public:
   node * head;
   int sz;
   SinglyLinkedList()
   {
    head=NULL;
    sz=0;
   }

   node * CreateNewNode(int value)
   {
    node * newnode=new node;
    newnode->data=value;
    newnode->next=NULL;
    return newnode;
   }

   void InsertAtHead(int value)
   {
    sz++;
    node * a=CreateNewNode(value);
    if(head==NULL)
    {
        head=a;
        return;
    }
    a->next=head;
    head=a;
   }

   void Reverse()
   {
    node * a=head;
    node * nxt=NULL;
    node * prv=NULL;
    while(a!=NULL)
    {
        nxt=a->next;
        a->next=prv;
        prv=a;
        a=nxt;
    }
    head=prv;
   }

   void Travers()
   {
    node * a=head;
    while(a!=NULL)
    {
        cout<<a->data<<" ";
        a=a->next;
    }
    cout<<"\n";
   }
};


int main()
{
    SinglyLinkedList sl;
    sl.InsertAtHead(5);
    sl.InsertAtHead(4);
    sl.InsertAtHead(3);
    sl.InsertAtHead(2);
    sl.InsertAtHead(1);
    sl.Travers();
    sl.Reverse();
    sl.Travers();
    return 0;
}

