#include <bits/stdc++.h>
using namespace std;
bool CheckPalindrome(string s, int i)
{
    if (i > s.size() / 2)
    {
        return true;
    }
    return (s[i] == s[s.size() - i - 1] && CheckPalindrome(s, i + 1));
}
int main()
{
    string s;
    cin >> s;
    if (CheckPalindrome(s, 0))
    {
        cout << "Yes";
    }
    else
        cout << "No";

    return 0;
}
