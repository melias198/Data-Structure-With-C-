#include<iostream>
#include<fstream>
using namespace std;

int main()
{
   ifstream a;
   ofstream b;
   a.open("ifofstreamin.txt");
   b.open("ifofstreamout.txt");
   int x;
   double y,z;
   a>>x>>y>>z;
   b<<x<<" "<<y<<" "<<z;
   a.close();
   b.close();
   return 0;
}

