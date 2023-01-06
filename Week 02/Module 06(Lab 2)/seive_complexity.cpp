#include <bits/stdc++.h>

using namespace std;

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

