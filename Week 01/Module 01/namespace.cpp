#include <bits/stdc++.h>

using namespace std;

int func(int a,int b)
{
    return a+b;
}

namespace info
{
int func(int a,int b)
{
    return a*b;
}
}

int main()
{
    int x,y;
    cin>>x>>y;
    int c=func(x,y);
    int d=info::func(x,y);
    cout<<c<<" "<<d;
    return 0;
}

