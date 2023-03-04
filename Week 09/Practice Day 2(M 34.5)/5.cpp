#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m,n;
    cin>>m;
    vector<int>first(m);
    for(int i=0;i<m;i++)
    {
        cin>>first[i];
    }
    cin>>n;
    vector<int>second(n);
    for(int i=0;i<n;i++)
    {
        cin>>second[i];
    }

    vector<int>v(m+n);
    vector<int>::iterator it;
    sort(first.begin(),first.end());
    sort(second.begin(),second.end());

    it=set_intersection(first.begin(),first.end(),second.begin(),second.end(),v.begin());
    v.resize(it-v.begin());
    for(it=v.begin();it!=v.end();++it)
    {
        cout<<*it<<" ";
    }
    return 0;
}

