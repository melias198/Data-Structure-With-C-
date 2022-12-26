#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x=10;
    int* y=&x;
    x=100;
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<*y;
    return 0;
}

