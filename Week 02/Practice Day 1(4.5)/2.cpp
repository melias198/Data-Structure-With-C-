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
    int mul=1;
    for(int i=0;i<n;i++)
    {
        if(i%2==1)
        mul*=v[i];
    }
    cout<<mul<<"\n";
    return 0;
}

