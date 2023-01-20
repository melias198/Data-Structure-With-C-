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

    void SearchIndex(int index)
    {
        node * a=head;
        int curr_index=0;
        while(a!=NULL)
        {
            if(curr_index==index)
            {
                cout<<"The value in index "<<index<<" is "<<a->data<<"\n";
                return;
            }
            a=a->nxt;
            curr_index++;
        }
    }

    void SearchValue(int value)
    {
        node * a=head;
        int index=0;
        while(a!=NULL)
        {
            if(a->data==value)
            {
                cout<<"The value exist in "<<index<<" Index"<<"\n";
                return;
            }
             a=a->nxt;
             index++;
        }
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
    l.SearchValue(20);
    l.SearchIndex(2);
    return 0;
}
