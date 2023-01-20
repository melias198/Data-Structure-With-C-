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

      bool CheckPalindrome()
      {
        node * b=head;
        int curr_index;
        while(curr_index!=sz-1)
        {
            b=b->nxt;
            curr_index++;
        }
        node * a=head;
        bool flag=true;
        while(a!=NULL && b!=NULL)
        {
            if(a->data!=b->data)
            {
              flag=false;
              break;
            }
            a=a->nxt;
            b=b->prv;
        }
      return flag;
      }
};

int main()
{
    DoublyLinkedList dl;
    dl.InsertAtHead(1);
    dl.InsertAtHead(2);
    dl.InsertAtHead(3);
    dl.InsertAtHead(2);
    dl.InsertAtHead(1);
    if(dl.CheckPalindrome())
    cout<<"True"<<"\n";
    else
    cout<<"False"<<"\n";
    return 0;
}

