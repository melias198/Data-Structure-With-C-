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

      bool operator < (student s) //operator overloading
      {
        return age<s.age;
      }
};


int main()
{
    vector<student> v;
    for(int i=0;i<10;i++)
    {
        v.push_back(student("Elias",i,30-i));
    }
    for(int i=0;i<10;i++)
    {
        v[i].print_func();
    }
    sort(v.begin(),v.end());
    cout<<"After sorting"<<"\n";
    for(int i=0;i<10;i++)
    {
        v[i].print_func();
    }
    return 0;
}

