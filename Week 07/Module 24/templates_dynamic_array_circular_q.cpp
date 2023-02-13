#include <bits/stdc++.h>

using namespace std;

template<class T>
class Queue
{
public:
    T *a;
    int l, r;
    int sz;
    int array_cap;
    Queue()
    {
        a = new T[1];
        array_cap = 1;
        l = 0;
        r = -1;
        sz = 0;
    }

    void removecircular()
    {
        if (l > r)
        {
            T *tmp = new T[array_cap];
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
        T *tmp = new T[array_cap * 2];
        for (int i = 0; i < array_cap; i++)
        {
            tmp[i] = a[i];
        }
        swap(tmp, a);
        array_cap=array_cap*2;
        delete[] tmp;
    }

    void enqueue(T value)
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

    T front()
    {
        if (sz == 0)
        {
            cout << "Queue is empty!"
                 << "\n";
            T a;
            return a;
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
