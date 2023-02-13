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
    int rev;
    Deque()
    {
        head = NULL;
        tail = NULL;
        sz = 0;
        rev=0;
    }

    node<T> *CreateNewNode(T value)
    {
        node<T> *newnode = new node<T>;
        newnode->data = value;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }

    void InsertAtFirst(T value)
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


    void InsertAtLast(T value)
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

    void push_front(T value)
    {
       if(rev==0)
       InsertAtFirst(value);
       else
       InsertAtLast(value);
    }

    void push_back(T value)
    {
       if(rev==0)
       InsertAtLast(value);
       else
       InsertAtFirst(value);
    }

    void DeleteAtFirst()
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

    void DeleteAtLast()
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

    void pop_front()
    {
       if(rev==0)
       DeleteAtFirst();
       else
       DeleteAtLast();
    }

    void pop_back()
    {
       if(rev==0)
       DeleteAtLast();
       else
       DeleteAtFirst();
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
        if(rev==0)
        return head->data;
        else
        return tail->data;
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
        if(rev==0)
        return tail->data;
        else
        return head->data;
    }

    void reverse_deque()
    {
        if(rev==0)
        {
            rev=1;
        }
        else
        {
            rev=0;
        }
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
    dq.push_back(10);
    dq.push_back(15);
    dq.push_front(20);
    dq.reverse_deque();
    cout<<"Back : "<<dq.back()<<" Front : "<<dq.front()<<"\n";
    dq.pop_front();
    cout<<"Back : "<<dq.back()<<" Front : "<<dq.front()<<"\n";
    dq.pop_back();
    cout<<"Back : "<<dq.back()<<" Front : "<<dq.front()<<"\n";

    return 0;
}

