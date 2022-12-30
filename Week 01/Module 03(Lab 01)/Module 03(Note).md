## Week 01

### (Module 03)

##### 1. Classes and Objects:

```
1. Classes:
A class in C++ is the building block that leads to Object-Oriented programming. It is a user-defined data type, which holds its own data members and member functions, which can be accessed and used by creating an instance of that class. A C++ class is like a blueprint for an object. For Example: Consider the Class of Cars. There may be many cars with different names and brand but all of them will share some common properties like all of them will have 4 wheels, Speed Limit, Mileage range etc. So here, Car is the class and wheels, speed limits, mileage are their properties.
  1.A Class is a user defined data-type which has data members and member functions.
  2.Data members are the data variables and member functions are the functions used to manipulate these variables and together these data members and member functions defines the properties and behavior of the objects in a Class.
  3.In the above example of class Car, the data member will be speed limit, mileage etc and member functions can be apply brakes, increase speed etc.
For Example: 
           class MyClass {       
           public:             
           int myNum;        
           string myString;
           };  

2. Objects:
An Object is an instance of a Class. When a class is defined, no memory is allocated but when it is instantiated (i.e. an object is created) memory is allocated.
For Example:

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
```
##### 2. Access Modifiers:
```
In this tutorial, we will learn about the access modifiers for C++ classes with the help of examples. The access modifiers of C++ are public, private, and protected.
Three types of access modifiers:
1. public
2. private
3. protected

1. public:
 All the class members declared under the public specifier will be available to everyone. The data members and member functions declared as public can be accessed by other classes and functions too. The public members of a class can be accessed from anywhere in the program using the direct member access operator (.) with the object of that class. 
For Example:  

#include <bits/stdc++.h>
using namespace std;

class student
{
public:
      string name;
      int std_roll;

      void print_func()
      {
        cout<<"Name: "<<name<<" "<<"Roll: "<<std_roll<<"\n";
      }
};

int main()
{
    student s;
    s.name="Elias";
    s.std_roll= 02;
    s.print_func();
    return 0;
}

2. private:
 The class members declared as private can be accessed only by the member functions inside the class. They are not allowed to be accessed directly by any object or function outside the class.
For Example:

#include <bits/stdc++.h>
using namespace std;

class student
{
private:
      string name;
      int std_roll;
public:
      void set_info(string a,int r)
      {
        name=a;
        std_roll=r;
      }
      void print_func()
      {
        cout<<"Name: "<<name<<" "<<"Roll: "<<std_roll<<"\n";
      }
};

int main()
{
    student s;
    s.set_info("Elias",02);
    s.print_func();
    return 0;
}

3. protected:
 The protected access modifier is similar to the private access modifier in the sense that it can’t be accessed outside of its class unless with the help of a friend class. The difference is that the class members declared as Protected can be accessed by any subclass (derived class) of that class as well.
For Example:

#include <bits/stdc++.h>
using namespace std;

class user
{
protected:
         string name;
         int age;
};

class admin:user //inherritence
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

```

##### 3. Constructor and Destructor:

```
1. Constructor:
 Constructor in C++ is a special method that is invoked automatically at the time of object creation. It is used to initialize the data members of new objects generally. The constructor in C++ has the same name as the class or structure. Constructor is invoked at the time of object creation. It constructs the values i.e. provides data for the object which is why it is known as constructors.
For Example:
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

2.Destructor:
 A destructor is also a special member function as a constructor. Destructor destroys the class objects created by the constructor. Destructor has the same name as their class name preceded by a tilde (~) symbol. It is not possible to define more than one destructor. The destructor is only one way to destroy the object created by the constructor. Hence destructor can-not be overloaded. Destructor neither requires any argument nor returns any value. It is automatically called when the object goes out of scope.  Destructors release memory space occupied by the objects created by the constructor. In destructor, objects are destroyed in the reverse of object creation. 
For Example:
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

```

##### 4. Dynamic Object in C++:

```
 In C++, the objects can be created at run-time. C++ supports two operators new and delete to perform memory allocation and de-allocation. These types of objects are called dynamic objects. The new operator is used to create objects dynamically and the delete operator is used to delete objects dynamically. The dynamic objects can be created with the help of pointers.
Syntax:
 ClassName *ptr_obj;         // pointer to object
 ptr_obj = new ClassName    // Dynamic object creation
 delete ptr_obj;           // Delete object dynamically

For Example:

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

      student(string s,int r,int ag)
      {
        name=s;
        std_roll=r;
        std_age=ag;
      }

      void print_func()
      {
        cout<<name<<" "<<std_roll<<" "<<std_age<<" "<<fathers_name<<" "<<mothers_name<<"\n";
      }
};

int main()
{
    student *s=new student("Elias",02,21);
    s->print_func();
    return 0;
}

```

##### 5. Array of Class:

```
The introduction of array class from C++11 has offered a better alternative for C-style arrays. The advantages of array class over C-style array are :- 
  1.Array classes knows its own size, whereas C-style arrays lack this property. So when passing to functions, we don’t need to pass size of Array as a separate parameter.
  2.With C-style array there is more risk of array being decayed into a pointer. Array classes don’t decay into pointers
  3.Array classes are generally more efficient, light-weight and reliable than C-style arrays.
For Example:
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

```

##### 6. Sort Array of Class:

```
1. Manual:
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

2. Auto:
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

```