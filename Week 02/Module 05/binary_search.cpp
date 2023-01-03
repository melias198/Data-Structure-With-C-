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
    int k;
    cin>>k;
    bool flag=0;
    int left =0,right=n-1;
    while(left<=right)
    {
        int mid=(left+right)/2;
        if(v[mid]==k)
        {
            cout<<"Yes! The value is exist.And index is = "<<mid;
            flag=1;
            break;
        }
        if(v[mid]>k)
        {
            right = mid-1;
        }
        else
        {
            left = mid+1;
        }
    }
    if(flag==0)
    {
        cout<<"No! the value doesn't exist.";
    }
    return 0;
}

