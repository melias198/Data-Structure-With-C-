#include <bits/stdc++.h>

using namespace std;

list<int>l;

bool searchValue(int value)
{
   auto it=l.begin();
   while(it!=l.end())
   {
       if(*it==value)
       {
           return true;
       }
       it++;
   }
   return false;
}

int main()
{
    l.push_front(5);
    l.push_front(4);
    l.push_front(6);
    l.push_front(2);
    l.push_front(3);
    
    if(searchValue(4))
    cout<<"True";
    else
    cout<<"False";
    return 0;
}
