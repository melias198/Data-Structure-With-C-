#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++) //for string length s.size()
    {
        s[i]+=1;
    }
    cout<<s;
    return 0;
}

