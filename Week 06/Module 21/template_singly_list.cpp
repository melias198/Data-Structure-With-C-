#include<bits/stdc++.h>

using namespace std;

template <class T>
class node
{
public:
    T data;
    node * nxt;
};

template <class T>
class LinkedList
{
public:
    node<T> * head;
    int sz;
    LinkedList()
    {
        head = NULL;
        sz=0;
    }

    node<T> * CreateNewNode(T value)
    {
        node<T> *newnode = new node<T>;
        newnode->data = value;
        newnode->nxt = NULL;
        return newnode;
    }

    void InsertAtHead(T value)
    {
        sz++;
        node<T> *a = CreateNewNode(value);
        if(head == NULL)
        {
            head = a;
            return;
        }
        a->nxt = head;
        head = a;
    }

    void Traverse()
    {
        node<T> * a = head;
        while(a!= NULL)
        {
            cout<<a->data<<" ";
            a = a->nxt;
        }
        cout<<"\n";
    }
   
    int getSize()
    {
        return sz;
    }

    void DeleteAtHead()
    {
        if(head == NULL)
        {
            return;
        }
        sz--;
        node<T> *a = head;
        head = a->nxt;
        delete a;
    }
};

int main()
{
    LinkedList<char> dl;
    dl.InsertAtHead('e');
    dl.InsertAtHead('d');
    dl.InsertAtHead('c');
    dl.InsertAtHead('b');
    dl.InsertAtHead('a');
    dl.Traverse();
    return 0;
}