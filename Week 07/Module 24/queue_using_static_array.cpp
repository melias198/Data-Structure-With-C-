#include <bits/stdc++.h>

using namespace std;

const int MAX_SIZE = 500;

class Queue
{
public:
    int a[MAX_SIZE];
    int l, r;
    Queue()
    {
        l = 0;
        r = -1;
    }

    void enqueue(int value)
    {
        if (r + 1 >= MAX_SIZE)
        {
            cout << "Queue is full!"
                 << "\n";
            return;
        }
        r++;
        a[r] = value;
    }

    void dequeue()
    {
        if (l > r)
        {
            cout << "Queue is empty!"
                 << "\n";
            return;
        }
        l++;
    }

    int front()
    {
        if (l > r)
        {
            cout << "Queue is empty!"
                 << "\n";
            return -1;
        }
        return a[l];
    }

    int size()
    {
        return r - l + 1;
    }
};

int main()
{
    Queue q;
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
    return 0;
}
