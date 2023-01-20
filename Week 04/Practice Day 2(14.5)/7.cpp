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

      void DeleteAtValue(int value)
      {
       node * a=head;
       while(a!=NULL)
       {
        if(a->data==value)
        {
            break;
        }
        a=a->nxt;
       }
       node * b=a->prv;
       node * c=a->nxt;
       if(b!=NULL)
       b->nxt=c;
       if(c!=NULL)
       c->prv=b;
       delete a;
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
    dl.InsertAtHead(6);
    dl.InsertAtHead(2);
    dl.InsertAtHead(1);
    dl.Travers();
    dl.DeleteAtValue(6);
    dl.Travers();
  
    return 0;
}

