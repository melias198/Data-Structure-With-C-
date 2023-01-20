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
    int size;
    LinkedList()
    {
        head=NULL;
        size=0;
    }

    node* CreatNewNode(int value)
    {
        node * newnode=new node;
        newnode->data=value;
        newnode->next=NULL;
        return newnode;
    }

    void InsertAtHead(int value)
    {
        size++;
        node * a=CreatNewNode(value);
        if(head == NULL)
        {
            head = a;
            return;
        }
        a->next=head;
        head=a;
    }

    int getSize()
    {
        return size;
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
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(10);
    l.InsertAtHead(20);
    l.InsertAtHead(30);
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(40);
    l.InsertAtHead(50);
    cout<<l.getSize()<<"\n";
    return 0;
}

