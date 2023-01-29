#include <bits/stdc++.h>
using namespace std;
int Maximum_Element(vector<int> a, int n)
{
    if (n == 1)
        return a[0];

    return max(a[n - 1], Maximum_Element(a, n - 1));
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int ans = Maximum_Element(v, n);
    cout << ans << "\n";
    return 0;
}
