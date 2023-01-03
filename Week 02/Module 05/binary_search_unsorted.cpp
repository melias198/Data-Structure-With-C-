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
    sort(v.begin(),v.end());
    int q;
    cin>>q;
    for(int j=0;j<q;j++)
    {
        int k;
        cin>>k;
        int left=0,right=n-1,flag=1;
        while(left<=right)
        {
         int mid=(left+right)/2;
         if(v[mid]==k)
         {
            cout<<"Yes! The value is exist.And index is = "<<mid<<"\n";
            flag=0;
            break;
         }
         if(v[mid]>k)
         {
            right=mid-1;
         }
         else
         {
            left=mid+1;
         }
        }
        if(flag)
        cout<<"No! the value doesn't exist."<<"\n";
    }
    return 0;
}

