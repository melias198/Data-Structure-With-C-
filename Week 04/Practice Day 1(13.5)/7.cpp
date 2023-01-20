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
    node *CreateNewNode(int value)
    {
        node *newnode = new node;
        newnode->data = value;
        newnode->next = NULL;
        return newnode;
    }

    void InserAtHead(int value)
    {
        node *a = CreateNewNode(value);
        if (head == NULL)
        {
            head = a;
            return;
        }
        a->next = head;
        head = a;
    }

    void SortLinkedList()
    {
     node * a=head->next;
     while(a!=NULL)
     {
        node * b=head;
        while(b!=a)
        {
            if(a->data<b->data)
            {
                swap(a->data,b->data);
                b=b->next;
            }
            else
            {
                b=b->next;
            }
        }
        a=a->next;
     }
    }

    void Travers()
    {
        node *a = head;
        while (a != NULL)
        {
            cout << a->data << " ";
            a = a->next;
        }
        cout << "\n";
    }
};

int main()
{
    LinkedList l;
    l.InserAtHead(3);
    l.InserAtHead(1);
    l.InserAtHead(5);
    l.InserAtHead(2);
    l.InserAtHead(4);
    l.Travers();
    l.SortLinkedList();
    l.Travers();
    return 0;
}
