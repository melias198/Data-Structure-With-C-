#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)

    {
        cin>>v[i];
    }
    vector<int>cnt(n);
    for(int i=0;i<n;i++)
    {
      cnt[v[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(cnt[i]>0)
        { 
            while(cnt[i]!=0) 
            {
                cout<<i<<" ";
                cnt[i]--;
            }
        }
    }
    return 0;
}

