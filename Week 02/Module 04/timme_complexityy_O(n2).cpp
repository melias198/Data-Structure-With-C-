#include <bits/stdc++.h>

using namespace std;

/*
Time complexity: O(n+(n*(n+1))/2)=O(n+(n^2)/2+n/2)=((n^2)/2)=O(n^2)
Space complexity: O(n)
*/

int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    // i=0--> 1---n-1==>n-1
    // i=1--> 2---n-1==>n-2
    // i=2--> 2---n-1==>n-3
    // i=n-1--> 0 ==> 0
    // (n-1)+(n-2)+(n-3)+.....+3+2+1
    //n*(n+1)/2
    
    for(int i=0;i<n;i++)
    {
        string ans="NO\n";
        for(int j=i+1;j<n;j++) // n*(n+1)/2 
        {
        if(i==j)
        continue;
        if(a[i]==a[j])
        {
         ans="YES\n";
        }
        }
        cout<<"i = "<<i<<" "<<ans;
    }
    return 0;
}

