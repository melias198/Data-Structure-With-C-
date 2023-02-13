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
    int rev;
    Deque()
    {
        head = NULL;
        tail = NULL;
        sz = 0;
        rev = 0;
    }

    node *CreateNewNode(int value)
    {
        node *newnode = new node;
        newnode->data = value;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }

    void InsertAtHead(int value)
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

    void InsertAtTail(int value)
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

    void push_front(int value)
    {
      if(rev==0)
      {
        InsertAtHead(value);
      }
      else
      {
        InsertAtTail(value);
      }
    }

    void push_back(int value)
    {
        if(rev==0)
        {
            InsertAtTail(value);
        }
        else
        {
            InsertAtHead(value);
        }
    }

    void DeleteFront()
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

    void DeleteTail()
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

    void pop_front()
    {
        if(rev==0)
        {
            DeleteFront();
        }
        else
        {
            DeleteTail();
        }
    }

    void pop_back()
    {
       if(rev==0)
       {
        DeleteTail();
       }
       else
       {
        DeleteFront();
       }
    }

    int front()
    {
        if (sz == 0)
        {
            cout << "Deque is empty!"
                 << "\n";
            return -1;
        }
        if(rev==0)
        return head->data;
        else
        return tail->data;
    }

    int back()
    {
        if (sz == 0)
        {
            cout << "Deque is empty!"
                 << "\n";
            return -1;
        }
        if(rev==0)
        return tail->data;
        else
        return head->data;
    }

    void reverse_deque()
    {
        if (rev == 0)
        {
            rev = 1;
        }
        else
        {
            rev = 0;
        }
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
