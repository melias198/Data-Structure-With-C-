#include <bits/stdc++.h>

using namespace std;

class node
{
public:
    int data;
    node* nxt;
};

class Queue
{
public:
    node * head;
    node * tail;
    int sz;
    Queue()
    {
        head=NULL;
        tail=NULL;
        sz=0;
    }

    node * CreatNewNode(int value)
    {
        node * newnode=new node;
        newnode->data=value;
        newnode->nxt=NULL;
        return newnode;
    }

    void enqueue(int value)
    {
        sz++;
        node * newnode=CreatNewNode(value);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
            return;
        }
        tail->nxt=newnode;
        tail=newnode;
    }

    void dequeue()
    {
        if(sz==0)
        {
            cout<<"Queue is empty!\n";
            return;
        }
        if(sz==1)
        {
            delete head;
            head=NULL;
            tail=NULL;
            sz--;
            return;
        }
        sz--;
        node * a=head;
        head=head->nxt;
        delete a;
    }

    int front()
    {
        if(sz==0)
        {
            cout<<"Queue is empty!\n";
            return -1;
        }
        return head->data;
    }

    int size()
    {
        return sz;
    }
};

int main()
{
    Queue q;
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(8);
    q.enqueue(2);
    q.enqueue(9);
    cout<<"Queue size : "<<q.size()<<'\n';
    cout<<q.front()<<'\n';
    q.dequeue();
    cout<<q.front()<<'\n';
    q.dequeue();
    cout<<q.front()<<'\n';
    q.dequeue();
    cout<<q.front()<<'\n';
    q.dequeue();
    cout<<q.front()<<'\n';
    q.dequeue();
    cout<<"Queue size : "<<q.size()<<"\n";
    return 0;
}

