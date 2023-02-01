#include<bits/stdc++.h>

using namespace std;

template <class T>
class node
{
public:
    T data;
    node * nxt;
    node * prv;
};

template <class T>
class DoublyLinkedList
{
public:
    node<T> *head;
    int sz;
    DoublyLinkedList()
    {
        head = NULL;
        sz = 0;
    }

    //Creates a new node with the given data and returns it O(1)
    node<T> * CreateNewNode(T data)
    {
        node<T> *newnode = new node<T>;
        newnode->data = data;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }

    //Inserts a node with given data at head O(1)
    void InsertAtHead(T data)
    {
        sz++;
        node<T> *newnode = CreateNewNode(data);
        if(head == NULL)
        {
            head = newnode;
            return;
        }
        node<T> *a = head;
        newnode->nxt = a;
        a->prv = newnode;
        head = newnode;
    }

    void DeleteAtHead()
    {
       if(head==NULL)
       {
        return;
       }
       node<T> *a=head;
       node<T> *b=head->nxt;
       if(b!=NULL)
       {
        b->prv=NULL;
       }
       delete a;
       head=b;
       sz--;
    }

  
    void Traverse()
    {
        node<T> *a = head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a = a->nxt;
        }
        cout<<"\n";
    }

    // Returns the size of linked list O(1)
    int getSize()
    {
        return sz;
    }
};


int main()
{
    DoublyLinkedList<char> dl;
    dl.InsertAtHead('e');
    dl.InsertAtHead('d');
    dl.InsertAtHead('c');
    dl.InsertAtHead('b');
    dl.InsertAtHead('a');
    dl.Traverse();
    return 0;
}