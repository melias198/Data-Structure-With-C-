#include <bits/stdc++.h>

using namespace std;

template <class T>
class node
{
public:
    T data;
    node *nxt;
};

template <class T>
class SiglyLinkedList
{
public:
    node<T> *head;
    int sz;
    SiglyLinkedList()
    {
        head = NULL;
        sz = 0;
    }

    node<T> *CreateNewNode(T value)
    {
        node<T> *newnode = new node<T>;
        newnode->data = value;
        newnode->nxt = NULL;
        return newnode;
    }

    void InsertAtHead(T value)
    {
        node<T> *newnode = CreateNewNode(value);
        sz++;
        if (head == NULL)
        {
            head = newnode;
            return;
        }
        newnode->nxt = head;
        head = newnode;
    }

    void DeleteAtHead()
    {
        if (head == NULL)
        {
            return;
        }
        sz--;
        node<T> *a = head;
        head = a->nxt;
        delete a;
    }

    int getSize()
    {
        return sz;
    }
};

template <class T>
class Stack
{
public:
    SiglyLinkedList<T> sl;
    Stack()
    {
    }

    T top()
    {
        if (sl.getSize() == 0)
        {
            cout << "Stack is empty!\n";
            T a;
            return a;
        }
        return sl.head->data;
    }

    void push(T value)
    {
        sl.InsertAtHead(value);
    }

    void pop()
    {
        if (sl.getSize() == 0)
        {
            cout << "Stack is empty!\n";
        }
        sl.DeleteAtHead();
    }
};

int main()
{
    Stack<int> st;
    st.push(3);
    st.push(2);
    st.push(1);
    cout << st.top() << "\n";
    st.pop();
    cout << st.top() << "\n";
    st.pop();
    cout << st.top() << "\n";
    st.pop();

    Stack<char> st1;
    st1.push('c');
    st1.push('b');
    st1.push('a');
    cout << st1.top() << "\n";
    st1.pop();
    cout << st1.top() << "\n";
    st1.pop();
    cout << st1.top() << "\n";
    st1.pop();

    return 0;
}
