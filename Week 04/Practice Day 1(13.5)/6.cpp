#include <bits/stdc++.h>

using namespace std;

class node
{
public:
      int data;
      node * next;
};

class LinkedList
{
public:
      node * head;
      LinkedList()
      {
        head=NULL;
      }
      
      node * CreatNewNode(int value)
      {
        node * newnode=new node;
        newnode->data=value;
        newnode->next=NULL;
        return newnode;
      }

      void InsertAtHead(int value)
      {
        node * a=CreatNewNode(value);
        if(head==NULL)
        {
            head=a;
            return;
        }
        a->next=head;
        head=a;
      }

      int SearchValue(int value)
      {
        node * a=head;
        while(a!=NULL)
        {
            if(a->data==value)
            {
                return 1;
            }
            a=a->next;
        }
        return 0;
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
    LinkedList l;
    l.InsertAtHead(5);
    l.InsertAtHead(4);
    l.InsertAtHead(3);
    l.InsertAtHead(2);
    l.InsertAtHead(1);
    int ans=l.SearchValue(3);
    if(ans)
    cout<<"True";
    else
    cout<<"False";
    return 0;
}

