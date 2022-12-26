#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> a;
    for(int i=0;i<10;i++)
    {
        a.push_back(i);
    }
    a.resize(5);//resize vector
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}

