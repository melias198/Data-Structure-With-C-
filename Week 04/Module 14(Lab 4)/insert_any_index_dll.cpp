#include <bits/stdc++.h>

using namespace std;

class node
{
public:
    int data;
    node *nxt;
    node *prv;
};

class DoublyLinkedList
{
public:
    node *head;
    int size;
    DoublyLinkedList()
    {
        head = NULL;
        size = 0;
    }

    node *CreateNewNode(int value)
    {
        node * newnode= new node;
        newnode->data=value;
        newnode->nxt=NULL;
        newnode->prv=NULL;
        return newnode;
    }

    void InsertAtHead(int value)
    {
        size++;
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

    void InsertAtAnyIndex(int index,int value)
    {
        if(index==0)
        {
            InsertAtHead(value);
            return;
        }
        if(index<0 || index>size-1)
        {
            return;
        }
        node * a=head;
        int curr_index=0;
        while(curr_index!=index-1)
        {
            a=a->nxt;
            curr_index++;
        }
        size++;
        node * newnode=CreateNewNode(value);
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

    int getSize()
    {
        return size;
    }
};

int main()
{
    DoublyLinkedList l;
    l.InsertAtHead(10);
    l.InsertAtHead(20);
    l.InsertAtHead(30);
    l.InsertAtHead(40);
    l.Travers();
    cout<<l.getSize()<<"\n";
    l.InsertAtAnyIndex(2,100);
    l.Travers();
    cout<<l.getSize()<<"\n";
    return 0;
}
