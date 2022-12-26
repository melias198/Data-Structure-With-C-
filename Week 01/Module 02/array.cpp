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
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arra[i];
    }
    int mul=1;
    for(int i=0;i<n;i++)
    {
        mul*=arra[i];
    }
    cout<<sum<<endl;
    cout<<mul<<endl;
    return 0;
}

