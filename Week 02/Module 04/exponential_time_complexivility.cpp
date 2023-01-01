#include <bits/stdc++.h>

using namespace std;

/*
Time complexity: O(n)
Space complexity: O(n)
*/

int called = 0;
int save[100];

//fibonacci

int fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    if(save[n]!=0)
        return save[n];
    int x = fib(n - 1);
    called++;
    int y = fib(n - 2);
    called++;
    save[n]=x+y;
    return x + y;
}

int main()
{
    int n;
    cin >> n;
    cout << "Fib = " << fib(n) << "\n";
    cout << "Called = " << called;
    return 0;
}
