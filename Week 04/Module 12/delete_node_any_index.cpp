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

    node * CreateNewNode(int value)
    {
        node * newnode=new node;
        newnode->data=value;
        newnode->next=NULL;
        return newnode;
    }

    void InsertAtHead( int value)
    {
        size++;
        node * a=CreateNewNode(value);
        if(head==NULL)
        {
            head=a;
            return;
        }
        a->next=head;
        head=a;
    }

    void InsertAtAnyIndex(int index,int value)
    {
        if(index<0 || index>size)
        {
            return;
        }
        if(index==0)
        {
            InsertAtHead(value);
            return;
        }
        size++;
        node * a=head;
        int curr_index=0;
        while(curr_index!=index-1)
        {
            a=a->next;
            curr_index++;
        }
        node * newnode=CreateNewNode(value);
        newnode->next=a->next;
        a->next=newnode;
    }

    void DeleteAtHead()
    {
        if(head==NULL)
        {
            return;
        }
        size--;
        node * a=head;
        head=a->next;
        delete a;
    }

    void DeleteAtAnyIndex(int index)
    {
        if(index<0 || index>size-1)
        {
            return;
        }
        if(index==0)
        {
            DeleteAtHead();
            return;
        }
        size--;
        node * a=head;
        int curr_index=0;
        while(curr_index!=index-1)
        {
            a=a->next;
            curr_index++;
        }
        node * b=a->next;
        a->next=b->next;
        delete b;
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
            a= a->next;
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
    l.Travers();
    cout<<l.getSize()<<"\n";
    l.InsertAtAnyIndex(1,40);
    l.InsertAtAnyIndex(3,50);
    l.Travers();
    cout<<l.getSize()<<"\n";
    l.DeleteAtHead();
    l.Travers();
    cout<<l.getSize()<<"\n";
    l.DeleteAtAnyIndex(1);
    l.Travers();
    cout<<l.getSize()<<"\n";
    return 0;
}

