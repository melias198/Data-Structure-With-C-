#include <bits/stdc++.h>

using namespace std;

int main()
{
    deque<int> dq;
    dq.push_back(5);
    dq.push_front(10);
    dq.push_back(3);
    dq.push_front(9);
    cout << "Size : " << dq.size() << "\n";
    dq.pop_back();
    dq.pop_front();
    cout << "Front : " << dq.front() << " Back : " << dq.back() << "\n";
    cout << "Size : " << dq.size() << "\n";

    deque<char> dq1;
    dq1.push_back('a');
    dq1.push_front('b');
    dq1.push_back('d');
    dq1.push_front('c');
    cout << "Size : " << dq1.size() << "\n";
    dq1.pop_back();
    dq1.pop_front();
    cout << "Front : " << dq1.front() << " Back : " << dq1.back() << "\n";
    cout << "Size : " << dq1.size() << "\n";
   
    return 0;
}

