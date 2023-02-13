#include <bits/stdc++.h>

using namespace std;

const int MAX_SIZE=500;

template<class T>
class Queue
{
public:
      T a[MAX_SIZE];
      int l,r;
      Queue()
      {
        l=0;
        r=-1;
      }
      void enqueue(T value)
      {
        if(r+1>=MAX_SIZE)
        {
            cout<<"Queue is full!"<<"\n";
            return;
        }
        r++;
        a[r]=value;
      }
      void dequeue()
      {
        if(l>r)
        {
            cout<<"Queue is empty!"<<"\n";
            return;
        }
        l++;
      }
      T front()
      {
        if(l>r)
        {
           cout<<"Queue is empty!"<<"\n";
           T a;
           return a;
        }
        return a[l];
      }

      int size()
      {
        return r-l+1;
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

