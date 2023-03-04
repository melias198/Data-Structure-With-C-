#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<int>st;
    st.insert(5);
    st.insert(3);
    st.insert(2);
    st.insert(7);
    st.insert(2);
    st.insert(3);
    cout<<st.size()<<"\n";
    for(auto it=st.begin();it!=st.end();it++)
    {
      cout<<*it<<" ";
    }
    cout<<"\n";
    st.erase(5);
    for(auto it=st.begin();it!=st.end();it++)
    {
      cout<<*it<<" ";
    }
    cout<<"\n";
    if(st.find(3) !=st.end())
    {
        cout<<"Number is found\n";
    }
    else
    {
        cout<<"Not Found\n";
    }
    return 0;
}

