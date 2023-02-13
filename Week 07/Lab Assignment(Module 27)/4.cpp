#include <bits/stdc++.h>

using namespace std;

int prec(char ch)
{
    if (ch == '+' || ch == '-')
    {
        return 1;
    }
    else if (ch == '*' || ch == '/')
    {
        return 2;
    }
    else
    {
        return -1;
    }
}

int operand(int a, int b, char ch)
{
    int ans;
    if (ch == '+')
    {
        ans = a + b;
    }
    else if (ch == '-')
    {
        ans = a - b;
    }
    else if (ch == '*')
    {
        ans = a * b;
    }
    else if (ch == '/')
    {
        ans = a / b;
    }
    return ans;
}

int main()
{
    string s;
    cin >> s;
    string ans = "";
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        char now = s[i];
        if (now >= '0' && now <= '9')
        {
            ans += now;
        }
        else if (now == '(')
        {
            st.push(now);
        }
        else if (now == ')')
        {
            while (st.top() != '(')
            {
                ans += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while (st.size() && prec(st.top()) >= prec(now))
            {
                ans += st.top();
                st.pop();
            }
            st.push(now);
        }
    }
    while (st.size())
    {
        ans += st.top();
        st.pop();
    }

    stack<int> st2;
    int result = 0;
    for (int i = 0; i < ans.size(); i++)
    {
        char now2 = ans[i];
        if (now2 >= '0' && now2 <= '9')
        {
            int val = now2 - 48;
            st2.push(val);
        }
        else
        {
            int value2 = st2.top();
            st2.pop();
            int value1 = st2.top();
            st2.pop();
            result = operand(value1, value2, now2);
            st2.push(result);
        }
    }
    cout << result << "\n";
    return 0;
}
