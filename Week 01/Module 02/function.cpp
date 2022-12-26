#include <bits/stdc++.h>

using namespace std;

string first_last_del(string a)
{
    a.erase(a.begin()+0);
    a.pop_back();
    return a;
}

int main()
{
    string s;
    cin>>s;
    string ans=first_last_del(s);
    cout<<ans;
    return 0;
}

