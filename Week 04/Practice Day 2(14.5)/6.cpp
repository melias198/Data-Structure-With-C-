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
      int sz;
      DoublyLinkedList()
      {
        head=NULL;
        sz=0;
      }

      node * CreatNewNode(int value)
      {
        node * newnode=new node;
        newnode->data=value;
        newnode->nxt=NULL;
        newnode->prv=NULL;
        return newnode;
      }

      void InsertAtHead(int value)
      {
        sz++;
        node * a=CreatNewNode(value);
        if(head==NULL)
        {
            head=a;
            return;
        }
        a->nxt=head;
        head->prv=a;
        head=a;
      }

      void InsertAtAnyIndex(int index,int value)
      {
        if(index<0 || index>sz)
        {
            return;
        }
        if(index==0)
        {
            InsertAtHead(value);
            return;
        }
        sz++;
        node * a=head;
        int curr_index=0;
        while(curr_index!=index-1)
        {
            a=a->nxt;
            curr_index++;
        }
        node * newnode=CreatNewNode(value);
        newnode->nxt=a->nxt;
        newnode->prv=a;
        node * b=a->nxt;
        b->prv=newnode;
        a->nxt=newnode;
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
    dl.Travers();
    dl.InsertAtAnyIndex(1,0);
    dl.Travers();
    return 0;
}

