#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    //bubble sort
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(v[j+1]>v[j])
            {
                int temp = v[j+1];
                v[j+1]=v[j];
                v[j]=temp;
            }
        }
    }
    for(auto val:v)
    cout<<val<<" ";
    return 0;
}

