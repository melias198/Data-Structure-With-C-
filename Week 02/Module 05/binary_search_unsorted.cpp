#include <bits/stdc++.h>

using namespace std;

/*
Time complexity-->O(nlogn+q.logn)-->if q=n,O(2nlogn)-->O(nlogn)
if the programme written by leniar search it complexity could be-->O(q.n)-->if q=n,O(n^2)
*/

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());//O(nlogn)
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

