#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b;
    cin>>n;
    vector<int>v(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    cin>>a>>b;
    for(int i=1;i<=n;i++)
    {
        if(i>=a && i<=b)
        {
            continue;
        }
        cout<<v[i]<<" ";
    }
    return 0;
}
