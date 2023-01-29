#include <bits/stdc++.h>

using namespace std;

int Summ(vector<int>a,int n)
{
    if(n==0)
    {
        return a[n];
    }
    return a[n]+Summ(a,n-1);
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
    int ans=Summ(v,n-1);
    cout<<ans;
    return 0;
}

