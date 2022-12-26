#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arra[n];
    for(int i=0;i<n;i++)
    {
        cin>>arra[i];
    }
    sort(arra,arra+n);
    int res=0;
    for(int i=0;i<n;i++)
    {
        while(i<n-1 && arra[i]==arra[i+1])
        {
            i++;
        }
        res++;
    }
    cout<<res;
    return 0;
}

