#include <bits/stdc++.h>

using namespace std;

int main()
{ 
    int n;
    cin>>n;
    int a;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin()+1,v.begin()+2+1);//specific sorting always +1 keep
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}

