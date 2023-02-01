#include <bits/stdc++.h>

using namespace std;

//O(n)
void Insert(list<int>&l,int index,int value)
{
    auto it=l.begin();
    advance(it,index);
    l.insert(it,value);
}

//O(n)
void Delete(list<int>&l,int index)
{
    auto it=l.begin();
    advance(it,index);
    l.erase(it);
}

//O(n)
void print(list<int>l)
{
 //list<int>::iterator a=l.begin();
 auto a=l.begin();
 while(a!=l.end())
 {
    cout<<*a<<" ";
    a++;
 }
 cout<<"\n";
}

int main()
{
    list<int>l;
    //O(1)
    l.push_front(5);
    l.push_front(4);
    l.push_front(3);
    l.push_front(2);
    l.push_front(1);
    print(l);
    //O(1)
    l.pop_front();
    print(l);
    //O(1)
    l.pop_back();
    print(l);
    //O(1)
    l.push_back(6);
    print(l);
    Insert(l,2,100);
    print(l);
    Delete(l,2);
    print(l);
    cout<<l.size()<<"\n";
    return 0;
}

