#include <bits/stdc++.h>

using namespace std;

class student
{
public:
      string name;
      string std_class;
      int std_roll;

void print_func()      
{
    cout<<"Name: "<<name<<" "<<"Class: "<<std_class<<" "<<"Roll: "<<std_roll<<"\n";
}
};

class rectangle
{
public:
      int width,height;
      student s;
      int area()
      {
        return height*width;
      }
      int perimetre()
      {
        return 2*(height+width);
      }
};

int main()
{
    rectangle r;
    r.width=5;
    r.height=6;
    cout<<"Area: "<<r.area()<<" "<<"Perimetre: "<<r.perimetre()<<"\n";
    r.s.name="Elias";
    r.s.std_class="Eleven";
    r.s.std_roll=1204;
    r.s.print_func();
    return 0;
}

