#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>arra(n);
    for(int i=0;i<n;i++)
    {
        cin>>arra[i];
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arra[i];
    }
    cout<<sum<<"\n";
    return 0;
}

