#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    reverse(v.begin(),v.end());

    for(int i=0; i<v.size(); i++)
        cout << v[i] << " ";
    cout << '\n';
    return 0;
}