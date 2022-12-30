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
 void print_func()
 {
  cout<<name<<" "<<std_roll<<" "<<std_age<<" "<<fathers_name<<" "<<mothers_name<<"\n";
 }     

};

int main()
{
    student s;
    s.name="Elias";
    s.std_roll=02;
    s.std_age=21;
    s.fathers_name="Ahmed Hossen";
    s.mothers_name="Hasina Begum";
    s.print_func();

    student s1;
    s1.name="Sohid";
    s1.std_roll=05;
    s1.std_age=21;
    s1.fathers_name="Nasir Uddin";
    s1.mothers_name="Parvin Akter";
    s1.print_func();
    return 0;
}

