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

bool comp(student a,student b)
{
    //when a is less then b,we compare anything,we want.
    return a.roll<b.roll;
}

int main()
{
    vector<student> v;
    for(int i=0;i<10;i++)
    {
        v.push_back(student("Elias",20-i,25));
    }
    for(int i=0;i<10;i++)
    {
        v[i].print_func();
    }
    sort(v.begin(),v.end(),comp);
    cout<<"After sorting"<<"\n";
    for(int i=0;i<10;i++)
    {
        v[i].print_func();
    }
    return 0;
}

