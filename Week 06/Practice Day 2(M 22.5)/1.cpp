
#include <bits/stdc++.h>

using namespace std;

list<int>l;

int getValue(int index)
{
    if(index>=l.size())
    {
        return -1;
    }
    auto it=l.begin();
    advance(it,index);
    return *it;
}

int main()
{
    l.push_front(5);
    l.push_front(4);
    l.push_front(6);
    l.push_front(2);
    l.push_front(3);
    
    cout<<getValue(2);
    return 0;
}
