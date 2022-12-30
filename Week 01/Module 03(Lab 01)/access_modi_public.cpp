#include <bits/stdc++.h>

using namespace std;

class student
{
public:
      string name;
      int std_roll;

      void print_func()
      {
        cout<<"Name: "<<name<<" "<<"Roll: "<<std_roll<<"\n";
      }
};

int main()
{
    student s;
    s.name="Elias";
    s.std_roll= 02;
    s.print_func();
    return 0;
}

