#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(i%2==0)
        {
            s[i]=s[i]+1;
            if(s[i]>122)
            {
                s[i]=s[i]-26;
            }
        }
    }
    cout<<s<<"\n";
    return 0;
}

