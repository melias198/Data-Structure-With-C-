#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    deque<char> dq;
    for (int i = 0; i < s.size(); i++)
    {
        dq.push_back(s[i]);
    }
    bool res = true;
    while (dq.size() > 1 && res)
    {
        char first = dq.front();
        dq.pop_front();
        char last = dq.back();
        dq.pop_back();
        if (first != last)
        {
            res = false;
        }
    }
    if (res)
    {
        cout << "Yes"<<'\n';
    }
    else
    {
        cout << "No"<<'\n';
    }
    return 0;
}
