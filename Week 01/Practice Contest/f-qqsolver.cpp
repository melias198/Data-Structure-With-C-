#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    s[0]=s[0]-48;
    s[2]=s[2]-48;
    int mul=s[0]*s[2];
    cout<<mul;
    return 0;
}

