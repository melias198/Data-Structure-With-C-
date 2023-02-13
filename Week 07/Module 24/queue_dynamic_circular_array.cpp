#include <bits/stdc++.h>

using namespace std;

class Queue
{
public:
    int *a;
    int l, r;
    int sz;
    int array_cap;
    Queue()
    {
        a = new int[1];
        array_cap = 1;
        l = 0;
        r = -1;
        sz = 0;
    }

    void removecircular()
    {
        if (l > r)
        {
            int *tmp = new int[array_cap];
            int idx = 0;
            for (int i = l; i < array_cap; i++)
            {
                tmp[idx] = a[i];
                idx++;
            }
            for (int i = 0; i <= r; i++)
            {
                tmp[idx] = a[i];
                idx++;
            }
            swap(tmp, a);
            l = 0;
            r = array_cap - 1;
            delete[] tmp;
        }
    }

    void increasesize()
    {
        removecircular();
        int *tmp = new int[array_cap * 2];
        for (int i = 0; i < array_cap; i++)
        {
            tmp[i] = a[i];
        }
        swap(tmp, a);
        array_cap=array_cap*2;
        delete[] tmp;
    }

    void enqueue(int value)
    {
        if (sz == array_cap)
        {
            increasesize();
        }
        if (r == array_cap)
        {
            r = 0;
        }
        r++;
        a[r] = value;
        sz++;
    }

    void dequeue()
    {
        if (sz == 0)
        {
            cout << "Queue is empty!"
                 << "\n";
            return;
        }
        l++;
        if (l == array_cap)
        {
            l = 0;
        }
        sz--;
    }

    int front()
    {
        if (sz == 0)
        {
            cout << "Queue is empty!"
                 << "\n";
            return -1;
        }
        return a[l];
    }

    int size()
    {
        return sz;
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
