#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v(n+1);
    for(int i=1;i<n;i++)
    {
        cin>>v[i];
    }
    vector<int>freq(n+1);
    for(int i=1;i<=n;i++)
    {
        freq[v[i]]=1;
    }
    for(int i=1;i<=n;i++)
    {
        if(freq[i]<1)
        cout<<i;
    }
    return 0;
}

