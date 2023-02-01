#include<bits/stdc++.h>

using namespace std;

class node
{
public:
    int data;
    node * nxt;
};

class LinkedList
{
public:
    node * head;
    int sz;
    LinkedList()
    {
        head = NULL;
        sz=0;
    }

    node* CreateNewNode(int value)
    {
        node *newnode = new node;
        newnode->data = value;
        newnode->nxt = NULL;
        return newnode;
    }

    void InsertAtHead(int value)
    {
        sz++;
        node *a = CreateNewNode(value);
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
        node* a = head;
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
        node *a = head;
        head = a->nxt;
        delete a;
    }
};

class Stack
{
public:
      LinkedList l;
      Stack()
      {

      }

      int top()
      {
        if(l.getSize()==0)
        {
            cout<<"Stack is Empty!\n";
            return -1;
        }
        return l.head->data;
      }

      void push(int value)
      {
        l.InsertAtHead(value);
      }

      void pop()
      {
        if(l.getSize()==0)
        {
            cout<<"Stack is Empty!\n";
            return;
        }
        l.DeleteAtHead();
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