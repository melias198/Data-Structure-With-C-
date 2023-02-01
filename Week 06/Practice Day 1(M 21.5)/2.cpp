#include <bits/stdc++.h>

using namespace std;

template <class T>
class node
{
public:
    T data;
    node * nxt;
};

template <class T>
class SinglyLinkedList
{
public:
    node<T> * head;
    int sz;
    SinglyLinkedList()
    {
        head = NULL;
        sz = 0;
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
        if (head == NULL)
        {
            head = a;
            return;
        }
        a->nxt = head;
        head = a;
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

    void Traverse()
    {
        node<T> *a = head;
        while (a != NULL)
        {
            cout << a->data << " ";
            a = a->nxt;
        }
        cout << "\n";
    }
};

template <class T>
class Stack
{
public:
    SinglyLinkedList<T> sl;
    Stack()
    {

    }

    void push(T value)
    {
        sl.InsertAtHead(value);
    }

    void pop()
    {
        if (sl.getSize() == 0)
        {
            cout << "Stack is Empty!\n";
            return;
        }
        sl.DeleteAtHead();
    }

    T top()
    {
        if (sl.getSize() == 0)
        {
            cout << "Stack is Empty!\n";
            T a;
            return a;
        }
        return sl.head->data;
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
    cout << st.top() << "\n";

    Stack<double> st1;
    st1.push(3.6);
    st1.push(2.4);
    st1.push(1.9);
    cout << st1.top() << "\n";
    st1.pop();
    cout << st1.top() << "\n";
    st1.pop();
    cout << st1.top() << "\n";
    st1.pop();
    cout << st1.top() << "\n";

    Stack<char> st2;
    st2.push('a');
    st2.push('b');
    st2.push('c');
    cout << st2.top() << "\n";
    st2.pop();
    cout << st2.top() << "\n";
    st2.pop();
    cout << st2.top() << "\n";
    st2.pop();
    cout << st2.top() << "\n";

    return 0;
}
