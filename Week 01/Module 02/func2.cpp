#include <bits/stdc++.h>

using namespace std;

void first_last_del(string &a)
{
    a.erase(a.begin()+0);
    a.pop_back();
}

int main()
{
    string s;
    cin>>s;
    first_last_del(s);
    cout<<s;
    return 0;
}

