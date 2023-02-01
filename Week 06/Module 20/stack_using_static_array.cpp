#include <bits/stdc++.h>

using namespace std;

const int MAX_SIZE=500;

class Stack
{
public:
      int a[MAX_SIZE];
      int stack_size;
      Stack()
      {
        stack_size=0;
      }
      
      //Add element in stack is O(1).
      void push(int value)
      {
        if(stack_size+1>MAX_SIZE)
        {
          cout<<"Stack is full!\n";
          return;
        }
        stack_size=stack_size+1;
        a[stack_size-1]=value;
      }

      //Delete element in stack is O(1).
      void pop()
      {
        if(stack_size==0)
        {
            cout<<"Stack is empty!";
            return;
        }
        a[stack_size-1]=0;
        stack_size=stack_size-1;
      }
     //Return the top element in stack is O(1).
      int top()
      {
        if(stack_size==0)
        {
            cout<<"Stack is empty!\n";
            return -1;
        }
        return a[stack_size-1];
      }

};

int main()
{
    Stack st;
    st.push(3);
    cout<<st.top()<<"\n";
    st.push(2);
    cout<<st.top()<<"\n";
    st.push(1);
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    return 0;
}

