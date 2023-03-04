#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        mp[a]++;
    }
    for(auto it:mp)
    {
        cout<<it.first<<" : "<<it.second<<"\n";
    }

    return 0;
}

