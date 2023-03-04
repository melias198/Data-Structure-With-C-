#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n;
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        st.insert(a);
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int b;
        cin >> b;
        st.insert(b);
    }
    for (auto i : st)
        cout << i << " ";
    cout << "\n";
    return 0;
}
