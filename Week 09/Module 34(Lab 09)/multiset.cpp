#include <bits/stdc++.h>

using namespace std;

int main()
{
    multiset<int>ml;
    ml.insert(4);
    ml.insert(3);
    ml.insert(8);
    ml.insert(9);
    ml.insert(4);
    ml.insert(3);
    ml.insert(8);
    cout<<ml.size()<<"\n";
    for(auto i:ml)
    {
        cout<<i<<" ";
    }
    cout<<"\n";
    ml.erase(4);
    for(auto i:ml)
    {
        cout<<i<<" ";
    }
    cout<<"\n";
    ml.erase(ml.find(8));
    for(auto i:ml)
    {
        cout<<i<<" ";
    }
    cout<<"\n";
    if(ml.find(3) !=ml.end())
    {
        cout<<"Found\n";
    }
    else
    {
        cout<<"Not Found\n";
    }

    if(ml.find(5) !=ml.end())
    {
        cout<<"Found\n";
    }
    else
    {
        cout<<"Not Found\n";
    }
    return 0;
}

