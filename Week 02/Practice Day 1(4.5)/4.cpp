#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    cin>>a;
    vector<int>v1(a);
    for(int i=0;i<a;i++)
    {
        cin>>v1[i];
    }
    cin>>b;
    vector<int>v2(b);
    for(int i=0;i<b;i++)
    {
        cin>>v2[i];
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
        if(v1[i]==v2[j])
        cout<<v1[i]<<" ";
        }
    }
    return 0;
}

