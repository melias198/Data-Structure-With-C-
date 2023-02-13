#include <bits/stdc++.h>

using namespace std;

class node
{
public:
    int data;
    node *prv;
    node *nxt;
};

class Deque
{
public:
    node *head;
    node *tail;
    int sz;
    Deque()
    {
        head = NULL;
        tail = NULL;
        sz = 0;
    }

    node *CreateNewNode(int value)
    {
        node *newnode = new node;
        newnode->data = value;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }

    void push_front(int value)
    {
        node *newnode = CreateNewNode(value);
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

    void push_back(int value)
    {
        node *newnode = CreateNewNode(value);
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
        node *a = head;
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
        node *a = tail;
        tail = tail->prv;
        tail->nxt = NULL;
        delete a;
        sz--;
    }

    int front()
    {
        if (sz == 0)
        {
            cout << "Deque is empty!"
                 << "\n";
            return -1;
        }
        return head->data;
    }

    int back()
    {
        if (sz == 0)
        {
            cout << "Deque is empty!"
                 << "\n";
            return -1;
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
    Deque dq;
    dq.push_back(5);
    dq.push_front(10);
    dq.push_back(3);
    dq.push_front(9);
    cout << "Size : " << dq.size() << "\n";
    dq.pop_back();
    dq.pop_front();
    cout << "Front : " << dq.front() << " Back : " << dq.back() << "\n";
    cout << "Size : " << dq.size() << "\n";
    return 0;
}
