#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> x;
    for(int i=0;i<10;i++)
    {
        x.push_back(i);//pushing value
    }
    x.insert(x.begin()+0,100);//for insert any value
    x.erase(x.begin()+1);//for delete any value
    x.pop_back();//for delete last element
    for(int i=0;i<x.size();i++)
    {
        cout<<x[i]<<endl;
    }

    return 0;
}

