#include <bits/stdc++.h>

using namespace std;

class user
{
protected:
         string name;
         int age;
};

class admin:user
{
 private:
        string designation;

 public:
 void set_info(string s,int ag,string dg)         
 {
    name=s;
    age=ag;
    designation=dg;
 } 

 void print_func()
 {
    cout<<"Name: "<<name<<" "<<"Age: "<<age<<" "<<"Designation: "<<designation<<"\n";
 }
};

int main()
{
    admin a;
    a.set_info("Elias",22,"CEO");
    a.print_func();
    return 0;
}

