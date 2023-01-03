#include <bits/stdc++.h>

using namespace std;

// memory complexity O(n)
class Array
{
private:
    int *ara;
    int cap;
    int sz;
    void increase_size()
    {
        cap = cap * 2;
        int *temp = new int[cap];
        for (int i = 0; i < sz; i++)
        {
            temp[i] = ara[i];
        }
        delete[] ara;
        ara = temp;
    }

public:
    Array()
    {
        ara = new int[1];
        cap = 1;
        sz = 0;
    }
    // Time complexity O(1)
    void Push_back(int x)
    {
        if (cap == sz)
        {
            increase_size();
        }
        ara[sz] = x;
        sz++;
    }
    //Time complexity O(sz)
    void insert(int pos,int x)
    {
        if (cap == sz)
        {
            increase_size();
        }
        for(int i=sz-1;i>=pos;i--)
        {
            ara[i+1]=ara[i];
        }
        ara[pos]=x;
        sz++;
    }
    //Time complexity O(sz)
    void print()
    {
        for (int i = 0; i < sz; i++)
        {
            cout << ara[i] << " ";
        }
        cout<<"\n";
    }
    //Time complexity O(1)
    int getSize()
    {
        return sz;
    }
    //Tie complexity O(1)
    int getElement(int idx)
    {
     if(idx>=sz)
     {
        cout<<"Error! "<<idx<<" is out of the bound."<<"\n";
        return -1;
     }
     return ara[idx];
    }
};

int main()
{
    Array a;
    a.Push_back(10);
    a.Push_back(20);
    a.Push_back(30);
    a.Push_back(40);
    a.Push_back(50);
    a.insert(1,15);
    a.print();
    cout<<"Current array size = "<<a.getSize()<<"\n";
    for(int i=0;i<a.getSize();i++)
    {
     cout<<a.getElement(i)<<"\n";
    }
    int value=a.getElement(6);
    return 0;
}
