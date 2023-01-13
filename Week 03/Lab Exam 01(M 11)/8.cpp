#include <bits/stdc++.h>

using namespace std;

vector<int> even_generator(vector<int>a)
{
    vector<int>even;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]%2==0)
        even.push_back(a[i]);
    }
    return even;
}

int main()
{
    vector<int> v={2,3,4,5,6};
    vector<int>ans=even_generator(v);
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
    return 0;
}

