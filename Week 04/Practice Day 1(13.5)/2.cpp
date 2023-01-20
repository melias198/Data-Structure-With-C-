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
    LinkedList()
    {
        head = NULL;
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
        node *a = CreatNewNode(value);
        if (head == NULL)
        {
            head = a;
            return;
        }
        a->next = head;
        head = a;
    }

    void DeleteAtHead()
    {
        node *a = head;
        head = a->next;
        delete a;
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
    l.DeleteAtHead();
    l.Travers();
    return 0;
}
