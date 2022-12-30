#include <bits/stdc++.h>

using namespace std;

class student
{
public:
      string name;
      int roll;
      int age;
      string fathers_name;
      string mothers_name;

      student(string name,int roll,int age,string fathers_name,string mothers_name)
      {
        this->name=name;
        this->roll=roll;
        this->age=age;
        this->fathers_name=fathers_name;
        this->mothers_name=mothers_name;
      }

      student(string name,int roll,int age)
      {
        this->name=name;
        this->roll=roll;
        this->age=age;
      }

      student()
      {

      }

      void print_func()
      {
        cout<<name<<" "<<roll<<" "<<age<<" "<<fathers_name<<" "<<mothers_name<<"\n";
      }
};

int main()
{
    student s("Elias",02,21,"Ahmed Hossen","Hasina Begum");
    s.print_func();
    student s1("Sahid",05,21);
    s1.print_func();
    student s3;
    return 0;
}

