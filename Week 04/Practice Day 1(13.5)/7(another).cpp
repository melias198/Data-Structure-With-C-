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
    node * sorted;
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
        sorted=NULL;
        node * curr=head;
        while(curr!=NULL)
        {
            node * a= curr->next;
            SortedInsert(curr);
            curr=a;
        }
        head=sorted;
    }
    
    void SortedInsert(node * a)
    {
        if(sorted==NULL || sorted->data>=a->data)
        {
            a->next=sorted;
            sorted=a;
        }
        else
        {
          node * curr = sorted;
          while(curr->next!=NULL && curr->next->data<a->data)
          {
            curr=curr->next;
          }
          a->next=curr->next;
          curr->next=a;
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
