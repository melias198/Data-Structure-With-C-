#include <bits/stdc++.h>

using namespace std;

//Time complexity: O(n+n^2) = O(n^2)

int main()
{ 
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=1;i<n;i++)
    {
        int idx=i;
        while(idx>=1)
        {
            if(v[idx-1]>v[idx])
            {
                swap(v[idx-1],v[idx]);
                idx--;
            }
            else
            {
                break;
            }
        }
    }
    for(auto val:v)
    cout<<val<<" ";
    return 0;
}

/*
outer loop is O(n)
inner loop is:
0+1+2+3.......+n-1=n*(n-1)/2= O(n^2)
*/
