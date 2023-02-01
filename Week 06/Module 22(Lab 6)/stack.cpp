#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<int>st;
    //O(1)
    st.push(5);
    st.push(4);
    st.push(3);
    //O(1)
    cout<<"Stack Size : "<<st.size()<<"\n";
    //O(1)
    cout<<st.top()<<"\n";
    //O(1)
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<"Stack Size : "<<st.size()<<"\n";
    return 0;
}

