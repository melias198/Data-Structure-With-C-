#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arra[n],sum=0;
    for(int i=1;i<n;i++)
    {
        cin>>arra[i];
        sum+=arra[i];
    }
    int max=0;
    for(int i=1;i<=n;i++)
       max+=i;
    int result=max-sum;
    cout<<result;   
    return 0;
}

