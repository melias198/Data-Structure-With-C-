#include <bits/stdc++.h>

using namespace std;

template <class T>
class Queue
{
public:
    T *a;
    int sz;
    int l, r;
    int array_cap;
    Queue()
    {
        a = new T[1];
        sz = 0;
        l = 0;
        r = -1;
        array_cap = 1;
    }

    void increase_size()
    {
        T *tmp = new T[array_cap * 2];
        for (int i = 0; i < array_cap; i++)
        {
            tmp[i] = a[i];
        }
        swap(tmp, a);
        array_cap = array_cap * 2;
        delete[] tmp;
    }

    void enqueue(T value)
    {
        if (array_cap == sz)
        {
            increase_size();
        }
        r++;
        a[r] = value;
        sz++;
    }

    void dequeue()
    {
        if (sz == 0)
        {
            cout << "Queue is empty!\n";
            return;
        }
        l++;
        sz--;
    }

    T front()
    {
        if (sz == 0)
        {
            cout << "Queue is empty!\n";
            T a;
            return a;
        }
        return a[l];
    }
};

int main()
{
    Queue<int> q;
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(8);
    q.enqueue(9);

    cout << q.front() << "\n";
    q.dequeue();
    cout << q.front() << "\n";
    q.dequeue();
    cout << q.front() << "\n";
    q.dequeue();
    cout << q.front() << "\n";
    q.dequeue();

    Queue<char> q2;
    q2.enqueue('a');
    q2.enqueue('b');
    q2.enqueue('c');

    cout << q2.front() << "\n";
    q2.dequeue();
    cout << q2.front() << "\n";
    q2.dequeue();
    cout << q2.front() << "\n";
    q2.dequeue();

    return 0;
}
