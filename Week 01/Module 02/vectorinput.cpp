#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    for(auto &p : v)
    cout<<p<<" ";

    return 0;
}

