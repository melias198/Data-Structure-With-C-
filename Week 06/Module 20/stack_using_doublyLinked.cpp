#include<bits/stdc++.h>

using namespace std;

class node
{
public:
    int data;
    node * nxt;
    node * prv;
};

class DoublyLinkedList
{
public:
    node *head;
    int sz;
    DoublyLinkedList()
    {
        head = NULL;
        sz = 0;
    }

    //Creates a new node with the given data and returns it O(1)
    node * CreateNewNode(int data)
    {
        node *newnode = new node;
        newnode->data = data;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }

    //Inserts a node with given data at head O(1)
    void InsertAtHead(int data)
    {
        sz++;
        node *newnode = CreateNewNode(data);
        if(head == NULL)
        {
            head = newnode;
            return;
        }
        node *a = head;
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
       node *a=head;
       node *b=head->nxt;
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
        node *a = head;
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

class Stack
{
public:
      DoublyLinkedList dl;
      Stack()
      {

      }
      int top()
      {
        if(dl.getSize()==0)
        {
            cout<<"Stack is Empty!\n";
            return -1;
        }
        return dl.head->data;
      }
      void push(int value)
      {
        dl.InsertAtHead(value);
      }
      void pop()
      {
        if(dl.getSize()==0)
        {
            cout<<"Stack is Empty!\n";
            return;
        }
        dl.DeleteAtHead();
      }
};

int main()
{
    Stack st;
    st.push(3);
    cout<<st.top()<<"\n";
    st.push(2);
    cout<<st.top()<<"\n";
    st.push(1);
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    return 0;
}