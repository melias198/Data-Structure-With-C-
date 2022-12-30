#include <bits/stdc++.h>

using namespace std;

class student
{
public:
      string name;
      int roll;
      int age;

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
        cout<<name<<" "<<roll<<" "<<age<<" "<<"\n";
      }
};

int main()
{
    student s[11];
    for(int i=1;i<=10;i++)
    {
        s[i]=student("Elias",i,20+i);
    }
    for(int i=1;i<=10;i++)
    {
        s[i].print_func();
    }
    return 0;
}

