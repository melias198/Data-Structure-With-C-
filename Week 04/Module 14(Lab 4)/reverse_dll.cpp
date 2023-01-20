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

    void Revers()
    {
        if(head==NULL)
        {
            return;
        }
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
            swap(b->prv,b->nxt);
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
    dl.InsertAtHead(50);
    dl.InsertAtHead(40);
    dl.InsertAtHead(30);
    dl.InsertAtHead(20);
    dl.InsertAtHead(10);
    dl.Travers();
    dl.Revers();
    dl.Travers();
    return 0;
}

