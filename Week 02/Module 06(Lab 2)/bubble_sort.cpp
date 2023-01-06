#include <bits/stdc++.h>

using namespace std;

// Time Complexity: O(n+n^2) = O(n^2)

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {
        bool sorted = true;
        for(int j=0;j<n-i-1;j++)
        {
            if(v[j]>v[j+1])
            {
                swap(v[j],v[j+1]);
                sorted = false;
            }
        }
        if(sorted)
        break;
    }
    for(auto val:v)
    cout<<val<<" ";
    return 0;
}


/*
nested outer loop is O(n).
inner loop is:
i=0 ---> j= n-1
i=1 ---> j= n-2
i=2 ---> j= n-3
i=3 ---> j= n-4
i=(n-1) ---> j= 0
...............
sum = n*(n-1)/2 = n^2
*/
