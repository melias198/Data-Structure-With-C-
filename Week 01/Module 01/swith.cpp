#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout<<"Enter a Day Number 1-7 : ";
    int d;
    cin>>d;
    switch (d)
    {
    case 1:
        cout<<"Saturday";
        break;
    case 2:
        cout<<"Sunday";
        break;
    case 3:
        cout<<"Monday";
        break;
    case 4:
        cout<<"Tuesday";
        break;
    case 5:
        cout<<"Wednesday";
        break;
    case 6:
        cout<<"Thursday";
        break;
    case 7:
        cout<<"Friday";
        break;
    default:
        cout<<"Invalid Day Number";
        break;
    }
    return 0;
}

