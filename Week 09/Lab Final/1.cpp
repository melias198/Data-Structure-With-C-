#include <bits/stdc++.h>

using namespace std;

vector<string> merge_sort(vector<string> s)
{
    if (s.size() <= 1)
    {
        return s;
    }
    vector<string> a;
    vector<string> b;
    int mid = s.size() / 2;
    for (int i = 0; i < mid; i++)
    {
        a.push_back(s[i]);
    }
    for (int i = mid; i < s.size(); i++)
    {
        b.push_back(s[i]);
    }

    vector<string> sorted_a = merge_sort(a);
    vector<string> sorted_b = merge_sort(b);
    vector<string> sorted_c;
    int idx1 = 0;
    int idx2 = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if(idx1==sorted_a.size())
        {
            sorted_c.push_back(sorted_b[idx2]);
            idx2++;
        }
        else if(idx2==sorted_b.size())
        {
            sorted_c.push_back(sorted_a[idx1]);
            idx1++;
        }
        else if (sorted_a[idx1]< sorted_b[idx2])
        {
            sorted_c.push_back(sorted_a[idx1]);
            idx1++;
        }
        else
        {
            sorted_c.push_back(sorted_b[idx2]);
            idx2++;
        }
    }
    return sorted_c;
}

int main()
{
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    vector<string>ans=merge_sort(s);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
