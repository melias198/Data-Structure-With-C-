#include <bits/stdc++.h>

using namespace std;

int main()
{
    queue<int> q;
    q.push(5);
    q.push(8);
    q.push(9);
    q.push(4);
    q.push(1);
    cout << "Q size : " << q.size() << '\n';
    cout << "Empty : " << q.empty() << "\n";
    cout << q.front() << "\n";
    q.pop();
    cout << q.front() << "\n";
    q.pop();
    cout << q.front() << "\n";
    q.pop();
    cout << q.front() << "\n";
    q.pop();
    cout << q.front() << "\n";
    q.pop();
    cout << "Q size : " << q.size() << '\n';
    cout << "Empty : " << q.empty() << "\n";

    return 0;
}
