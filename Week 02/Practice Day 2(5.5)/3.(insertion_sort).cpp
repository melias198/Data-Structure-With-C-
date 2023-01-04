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
    //insertion sort
    int i,j,temp;
    for(i=1;i<n;i++)
    {
        temp=v[i];
        j=i-1;
        while(j>=0 && v[j]<temp)
        {
            v[j+1]=v[j];
            j=j-1;
        }
        v[j+1]=temp;
    }
    for(auto val:v)
    cout<<val<<" ";
    return 0;
}

