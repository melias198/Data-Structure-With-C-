#include <bits/stdc++.h>

using namespace std;

int main()
{
   bool x=true;
   bool y=false;
   int z=5;
   if(z<6)
   {
    cout<<"True"<<endl;
    if(x)
    {
        cout<<"I'm nested if";
    }
    else
    {
        cout<<"I'm nested else";
    }
   }
   else
   {
    cout<<"False";
   }
    return 0;
}

