#include <bits/stdc++.h>

using namespace std;

template<class T>
class node
{
public:
    T data;
    node *prv;
    node *nxt;
};

template<class T>
class Deque
{
public:
    node<T> *head;
    node<T> *tail;
    int sz;
    Deque()
    {
        head = NULL;
        tail = NULL;
        sz = 0;
    }

    node<T> *CreateNewNode(T value)
    {
        node<T> *newnode = new node<T>;
        newnode->data = value;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }

    void push_front(T value)
    {
        node<T> *newnode = CreateNewNode(value);
        if (sz == 0)
        {
            head = newnode;
            tail = newnode;
            sz++;
            return;
        }
        head->prv = newnode;
        newnode->nxt = head;
        head = newnode;
        sz++;
    }

    void push_back(T value)
    {
        node<T> *newnode = CreateNewNode(value);
        if (sz == 0)
        {
            head = newnode;
            tail = newnode;
            sz++;
            return;
        }
        tail->nxt = newnode;
        newnode->prv = tail;
        tail = newnode;
        sz++;
    }

    void pop_front()
    {
        if (sz == 0)
        {
            cout << "Deque is empty!"
                 << "\n";
            return;
        }
        if (sz == 1)
        {
            delete head;
            head = NULL;
            tail = NULL;
            sz--;
            return;
        }
        node<T> *a = head;
        head = head->nxt;
        head->prv = NULL;
        delete a;
        sz--;
    }

    void pop_back()
    {
        if (sz == 0)
        {
            cout << "Deque is empty!"
                 << "\n";
            return;
        }
        if (sz == 1)
        {
            delete tail;
            head = NULL;
            tail = NULL;
            sz--;
            return;
        }
        node<T> *a = tail;
        tail = tail->prv;
        tail->nxt = NULL;
        delete a;
        sz--;
    }

    T front()
    {
        if (sz == 0)
        {
            cout << "Deque is empty!"
                 << "\n";
            T a;
            return a;
        }
        return head->data;
    }

    T back()
    {
        if (sz == 0)
        {
            cout << "Deque is empty!"
                 << "\n";
            T a;
            return a;
        }
        return tail->data;
    }

    int size()
    {
        return sz;
    }
};

int main()
{
    Deque<int> dq;
    dq.push_back(5);
    dq.push_front(10);
    dq.push_back(3);
    dq.push_front(9);
    cout << "Size : " << dq.size() << "\n";
    dq.pop_back();
    dq.pop_front();
    cout << "Front : " << dq.front() << " Back : " << dq.back() << "\n";
    cout << "Size : " << dq.size() << "\n";

    Deque<char> dq1;
    dq1.push_back('a');
    dq1.push_front('b');
    dq1.push_back('d');
    dq1.push_front('c');
    cout << "Size : " << dq1.size() << "\n";
    dq1.pop_back();
    dq1.pop_front();
    cout << "Front : " << dq1.front() << " Back : " << dq1.back() << "\n";
    cout << "Size : " << dq1.size() << "\n";
   
    return 0;
}
