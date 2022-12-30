#include <bits/stdc++.h>

using namespace std;

class student
{
private:
      string name;
      int std_roll;
public:
      void set_info(string a,int r)
      {
        name=a;
        std_roll=r;
      }
      void print_func()
      {
        cout<<"Name: "<<name<<" "<<"Roll: "<<std_roll<<"\n";
      }
};

int main()
{
    student s;
    s.set_info("Elias",02);
    s.print_func();
    return 0;
}

