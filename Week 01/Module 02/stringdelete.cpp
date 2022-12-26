#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    s.erase(s.begin()+0);//for delete first character
   // s.pop_back();//for delete last character [s.erase(s.begin()+s.size()-1)]
    s.erase(s.begin()+s.size()-1);
    cout<<s;
    return 0;
}

