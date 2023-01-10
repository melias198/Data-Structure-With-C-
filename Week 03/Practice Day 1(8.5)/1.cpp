#include <bits/stdc++.h>

using namespace std;

vector<int> merge(vector<int>b,vector<int>c)
{
    vector<int>sorted_a;
    int n=b.size()+c.size();
    int idx1=0,idx2=0;
    for(int i=0;i<n;i++)
    {
     if(idx1==b.size())
     {
        sorted_a.push_back(c[idx2]);
        idx2++;
     }
     else if(idx2==c.size())
     {
        sorted_a.push_back(b[idx1]);
        idx1++;
     }
     else if(b[idx1]>c[idx2])
     {
        sorted_a.push_back(b[idx1]);
        idx1++;
     }
     else
     {
        sorted_a.push_back(c[idx2]);
        idx2++;
     }
    }
    return sorted_a;
}

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int n2;
    cin>>n2;
    vector<int>v2(n2);
    for(int i=0;i<n2;i++)
    {
        cin>>v2[i];
    }
    vector<int> ans=merge(v,v2);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}

