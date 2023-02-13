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
class Queue
{
public:
    node<T> *head;
    node<T> *tail;
    int sz;
    Queue()
    {
        head = NULL;
        tail = NULL;
        sz = 0;
    }

    node<T> *CreatNewNode(T value)
    {
        node<T> *newnode = new node<T>;
        newnode->data = value;
        newnode->nxt = NULL;
        return newnode;
    }

    void enqueue(T value)
    {
        sz++;
        node<T> *newnode = CreatNewNode(value);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        tail->nxt = newnode;
        tail = newnode;
    }

    void dequeue()
    {
        if (sz == 0)
        {
            cout << "Queue is empty!\n";
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
        sz--;
        node<T> *a = head;
        head = head->nxt;
        delete a;
    }

    T front()
    {
        if (sz == 0)
        {
            cout << "Queue is empty!\n";
            T a;
            return a;
        }
        return head->data;
    }

    int size()
    {
        return sz;
    }
};

int main()
{
    Queue<int> q;
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(8);
    q.enqueue(9);
    cout << "Queue Size : " << q.size() << "\n";
    cout << q.front() << "\n";
    q.dequeue();
    cout << q.front() << "\n";
    q.dequeue();
    cout << q.front() << "\n";
    q.dequeue();
    cout << q.front() << "\n";
    q.dequeue();
    cout << "Queue Size : " << q.size() << "\n";

    Queue<char> q2;
    q2.enqueue('a');
    q2.enqueue('b');
    q2.enqueue('c');
    cout << "Queue Size : " << q2.size() << "\n";
    cout << q2.front() << "\n";
    q2.dequeue();
    cout << q2.front() << "\n";
    q2.dequeue();
    cout << q2.front() << "\n";
    q2.dequeue();
    cout << "Queue Size : " << q2.size() << "\n";

    Queue<double> q3;
    q3.enqueue(5.5);
    q3.enqueue(6.8);
    q3.enqueue(8.9);
    q3.enqueue(9.3);
    q3.enqueue(2.3);
    cout << "Queue Size : " << q3.size() << "\n";
    cout << q3.front() << "\n";
    q3.dequeue();
    cout << q3.front() << "\n";
    q3.dequeue();
    cout << q3.front() << "\n";
    q3.dequeue();
    cout << q3.front() << "\n";
    q3.dequeue();
    cout << q3.front() << "\n";
    q3.dequeue();
    cout << "Queue Size : " << q3.size() << "\n";

    return 0;
}
