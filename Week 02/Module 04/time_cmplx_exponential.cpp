#include <bits/stdc++.h>

using namespace std;

int called = 0;

int fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    int x = fib(n - 1);
    called++;
    int y = fib(n - 2);
    called++;
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
