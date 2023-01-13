#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n1,n2;
    cin>>n1;
    vector<int>a(n1);
    for(int i=0;i<n1;i++)
    cin>>a[i];
    cin>>n2;
    vector<int>b(n2);
    for(int i=0;i<n2;i++)
    cin>>b[i];
    int j=0,cnt=0;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(int i=0;i<n2;i++)
    {
      if(b[i]==a[j])
      {
        cnt++;
        j++;
      }
    }
    if(cnt==n1)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}

