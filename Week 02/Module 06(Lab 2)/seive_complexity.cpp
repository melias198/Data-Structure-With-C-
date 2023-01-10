#include <bits/stdc++.h>

using namespace std;

//Time complexity: O(nlogn)

int main()
{
    int n;
    cin>>n;
    vector<int>primes;
    vector<bool>visited(n+1);
    for(int i=2;i<=n;i++)
    {
        if(visited[i]==false)
        {
            primes.push_back(i);
            for(int j=2;i*j<=n;j++)
            {
                visited[i*j]=true;
            }
        }
    }
    cout<<"Total prime numbers : "<<primes.size()<<"\n";
    for(auto val:primes)
    cout<<val<<" ";
    return 0;
}

/*
outer loop is O(n)
inner loop is:
i=2 --> j=n/2
i=3 --> j=n/3
i=4 --> j=0,n/4
i=5 --> j=n/5
i=6 --> j=0,n/6
n/2 + n/3 + n/4 + n/5 + n/6 + ..... + n/n
n(1/2 + 1/3 + 1/4 + 1/5 + 1/6 + ....+ 1/n) Hermonic Series(1 + 1/2 + 1/3 + 1/4=logn)
n(logn)
*/

