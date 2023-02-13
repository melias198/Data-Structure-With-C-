#include <bits/stdc++.h>

using namespace std;

void deleteValue(list<int> &l, int value)
{
    int cnt = 0;
    for (auto it = l.begin(); it != l.end(); it++)
    {
        if (*it == value)
        {
            break;
        }
        cnt++;
    }
    auto it = l.begin();
    advance(it, cnt);
    l.erase(it);
}

int main()
{
    list<int> l;
    l.push_back(7);
    l.push_back(3);
    l.push_back(8);
    l.push_back(4);
    l.push_back(5);
    l.push_back(4);
    deleteValue(l, 4);
    for (auto it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}
