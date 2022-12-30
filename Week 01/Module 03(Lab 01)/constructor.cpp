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

      student(string s,int r,int ag,string f_name,string m_name)
      {
        name=s;
        std_roll=r;
        std_age=ag;
        fathers_name=f_name;
        mothers_name=m_name;
      }

      void print_func()
      {
        cout<<name<<" "<<std_roll<<" "<<std_age<<" "<<fathers_name<<" "<<mothers_name<<"\n";
      }
};

int main()
{
    student s("Elias",02,21,"Ahmed Hossen","Hasina Begum");
    s.print_func();
    return 0;
}

