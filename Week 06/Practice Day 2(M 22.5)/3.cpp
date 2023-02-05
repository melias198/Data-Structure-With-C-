#include <bits/stdc++.h>

using namespace std;

list<int>l;

void DeleteZero()
{
  l.remove(0);
}

void print()
{
    auto it=l.begin();
    while(it!=l.end())
    {
        cout<<*it<<" ";
        it++;
    }
    cout<<"\n";

}

int main()
{
    l.push_front(5);
    l.push_front(0);
    l.push_front(6);
    l.push_front(0);
    l.push_front(3);
    DeleteZero();
    print();
    return 0;
}
