#include <bits/stdc++.h>

using namespace std;

bool myCompare(pair<int,int>p1,pair<int,int>p2)
{
  return p1.first<p2.first;
}

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(make_pair(a,i));
    }
    sort(v.begin(),v.end(),myCompare);

    for(int i=0;i<v.size();i++)
    {
        cout<<"Value "<<v[i].first<<", Previous Index "<<v[i].second<<"\n";
    }

    return 0;
}