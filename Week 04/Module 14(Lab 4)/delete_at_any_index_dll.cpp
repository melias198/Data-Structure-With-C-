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
        sz++;
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

      void DeleteAtAnyIndex(int index)
      {
        if(index<0 || index>=sz)
        {
            return;
        }
        node * a=head;
        int curr_index=0;
        while(curr_index!=index)
        {
            a=a->nxt;
            curr_index++;
        }
        sz--;
        node * b=a->prv;
        node * c=a->nxt;
        if(b!=NULL)
        {
            b->nxt=c;
        }
        if(c!=NULL)
        {
            c->prv=b;
        }
        delete a;
        if(index==0)
        {
            head=c;
        }
      }

      int getSize()
      {
        return sz;
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
    cout<<dl.getSize()<<"\n";
    dl.DeleteAtAnyIndex(4);
    dl.DeleteAtAnyIndex(2);
    dl.DeleteAtAnyIndex(0);
    dl.Travers();
    cout<<dl.getSize()<<"\n";
    return 0;
}

