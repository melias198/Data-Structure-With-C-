#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n1,n2;
    cin>>n1;
    vector<int>a(n1);
    for(int i=0;i<n1;i++)
    {
        cin>>a[i];
    }
    cin>>n2;
    vector<int>b(n2);
    for(int i=0;i<n2;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<n1;i++)
    {
        cout<<a[i]<<" ";
    }
    for(int i=0;i<n2;i++)
    {
        for(int j=0;j<n1;j++)
        {
          if(b[i]==a[j])
          {
          b[i]=-1;
          break;
          }
        }
        if(b[i]>0)
        cout<<b[i]<<" ";
    }
    return 0;
}

