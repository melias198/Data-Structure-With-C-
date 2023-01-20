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

    void InserAfterValue(int value,int data)
    {
        node * a=head;
        while(a!=NULL)
        {
            if(a->data==value)
            {
                break;
            }
            a=a->next;
        }
        if(a==NULL)
        {
            cout<<"The value dose not exit!"<<"\n";
            return;
        }
        size++;
        node * newnode=CreatNewNode(data);
        newnode->next=a->next;
        a->next=newnode;
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
    l.InsertAtHead(10);
    l.InsertAtHead(20);
    l.InsertAtHead(30);
    l.InsertAtHead(40);
    l.InsertAtHead(50);
    l.Travers();
    cout<<l.getSize()<<"\n";
    l.InserAfterValue(30,100);
    l.Travers();
    cout<<l.getSize()<<"\n";
    return 0;
}

