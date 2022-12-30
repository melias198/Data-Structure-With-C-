#include <bits/stdc++.h>

using namespace std;

class person
{
public:
      string name;
      person *father,*mother;

      void print_func()
      {
        cout<<"Name: "<<name<<" "<<"Father: "<<father->name<<" "<<"Mother: "<<mother->name<<"\n";
      }
};

int main()
{
    person p;
    p.father=new person;
    p.mother=new person;
    p.name="Elias.";
    p.father->name="Ahmed Hossen.";
    p.mother->name="Hasina Begum.";
    p.print_func();
    return 0;
}

