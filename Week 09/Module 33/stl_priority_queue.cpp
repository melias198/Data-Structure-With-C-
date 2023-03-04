#include <bits/stdc++.h>

using namespace std;

int main()
{
    priority_queue<int>pq;

    pq.push(4);
    pq.push(8);
    pq.push(10);
    pq.push(3);
    pq.push(2);

    while(pq.size()!=0)
    {
      cout<<pq.top()<<"\n";
      pq.pop();
    }

    return 0;
}

