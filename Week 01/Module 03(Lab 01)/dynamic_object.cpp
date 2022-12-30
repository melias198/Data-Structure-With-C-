#include <bits/stdc++.h>

using namespace std;

class student
{
public:
      string name;
      int std_roll;
      int std_age;
      string fathers_name;
      string mothers_name;

      student(string s,int r,int ag)
      {
        name=s;
        std_roll=r;
        std_age=ag;
      }

      void print_func()
      {
        cout<<name<<" "<<std_roll<<" "<<std_age<<" "<<fathers_name<<" "<<mothers_name<<"\n";
      }
};

int main()
{
    student *s=new student("Elias",02,21);
    s->print_func();
    return 0;
}

