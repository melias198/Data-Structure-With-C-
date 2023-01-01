#include <bits/stdc++.h>

using namespace std;

/*
Time complexity: O(n)
Space complexity: O(1)
*/

int main()
{
    int n;
    cin>>n;
    int ans=0;
    for(int i=1;i<=n;i++)
    {
     ans+=i;
    }
    cout<<ans;
    return 0;
}

