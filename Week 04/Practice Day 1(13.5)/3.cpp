#include <bits/stdc++.h>

using namespace std;

class node
{
public:
    int data;
    node *next;
};

class LinkedList
{
public:
    node *head;
    int size;
    LinkedList()
    {
        head = NULL;
        size=0;
    }

    node *CreatNewNode(int value)
    {
        node *newnode = new node;
        newnode->data = value;
        newnode->next = NULL;
        return newnode;
    }

    void InserAtHead(int value)
    {
        size++;
        node *a = CreatNewNode(value);
        if (head == NULL)
        {
            head = a;
            return;
        }
        a->next = head;
        head = a;
    }

    void DeleteAtTail()
    {
        node * a=head;
        int index=0;
        while(index!=size-2)
        {
            a=a->next;
            index++;
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
            a=a->next;
        }
        cout<<"\n";
    }
};

int main()
{
    LinkedList l;
    l.InserAtHead(5);
    l.InserAtHead(4);
    l.InserAtHead(3);
    l.InserAtHead(2);
    l.InserAtHead(1);
    l.Travers();
    l.DeleteAtTail();
    l.Travers();
    return 0;
}
