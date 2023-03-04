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
    for(auto i:st)
    cout<<i<<" ";
    cout<<"\n";
    cout<<st.size()<<"\n";
    return 0;
}

