#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    map<string,int>mp;
    for(int i=0;i<n;i++)
    {
        string st;
        cin>>st;
        if(mp.count(st)==0)
        {
          cout<<"-1"<<"\n";
        }
        else
        {
            cout<<mp[st]<<"\n";
        }
        mp[st]=i;
    }
    return 0;
}

