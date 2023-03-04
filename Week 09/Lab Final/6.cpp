#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    deque<int>dq;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        dq.push_back(a);
    }
    deque<int>tmp;
    while(!dq.empty())
    {
        if(dq.front()>dq.back())
        {
            tmp.push_back(dq.back());
            dq.pop_back();
        }
        else
        {
            tmp.push_back(dq.front());
            dq.pop_front();
        }
    }

    while(!tmp.empty())
    {
        cout<<tmp.front()<<" ";
        tmp.pop_front();
    }

    return 0;
}

