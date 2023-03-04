#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>


using namespace std;

priority_queue<int>pq;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        if(a==1)
        {
            int x;
            cin>>x;
            pq.push(x);
        }
        else
        {
            int val=pq.top();
            pq.pop();
            cout<<val<<"\n";
        }
        
    }
    return 0;
}