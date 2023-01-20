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

     bool CheckValue(int value)
     {
      node * a=head;
      bool flag=false;
      while(a!=NULL)
      {
        if(a->data==value)
        {
            flag=true;
            break;
        }
        a=a->nxt;
      }
      return flag;
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
    bool ans=dl.CheckValue(3);
    if(ans)
    cout<<"True"<<"\n";
    else
    cout<<"False"<<"\n";
    return 0;
}

