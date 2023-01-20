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

      node * CreatNewNoide(int value)
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
        node * a=CreatNewNoide(value);
        if(head==NULL)
        {
            head=a;
            return;
        }
        a->nxt=head;
        head->prv=a;
        head=a;
      }

     void Reverse()
     {
        node * a=head;
        int curr_index=0;
        while(curr_index!=sz-1)
        {
            a=a->nxt;
            curr_index++;
        }
        node * b=head;
        while(b!=NULL)
        {
            swap(b->nxt,b->prv);
            b=b->prv;
        }
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
    dl.Travers();
    dl.Reverse();
    dl.Travers();
    return 0;
}

