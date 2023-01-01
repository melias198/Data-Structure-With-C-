#include <bits/stdc++.h>

using namespace std;

/*
Time complexity: O(n)
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
    int k;
    cin>>k;
    for(int i=0;i<n;i++)
    {
        if(a[i]==k)
        {
        cout<<"index = "<<i<<"--> "<<"Yes"<<"\n";
        return 0;
        }
    }

    return 0;
}

