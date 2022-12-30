#include <bits/stdc++.h>

using namespace std;

class person
{
public:
      string name;
      person *father,*mother;

      person()
      {
        father = NULL;
        mother = NULL;
      }

      person(string name,string f_name,string m_name)
      {
         this->name=name;
         father=new person;
         father->name=f_name;
         mother=new person;
         mother->name=m_name;
      }

      void print_func()
      {
        cout<<"Name: "<<name<<" "<<"Father: "<<father->name<<" "<<"Mother: "<<mother->name<<"\n";
      }

      ~person()
      {
        if(father != NULL)
        delete father;
        if(mother !=NULL)
        delete mother;
      }
};

int main()
{
    person p("Elias","Ahmed Hossen","Hasina Begum");
    p.print_func();
    return 0;
}

