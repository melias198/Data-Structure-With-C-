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
    int flag=0;
    int left =0,right=n-1;
    while(left<=right)
    {
        int mid=(left+right)/2;
        if(v[mid]==k)
        {
            flag++;
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
    if(flag>1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
