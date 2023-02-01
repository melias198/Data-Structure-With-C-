#include <bits/stdc++.h>

using namespace std;

const int MAX_SIZE=10;

template <class T>
class Stack
{
public:
      T a[MAX_SIZE];
      int stack_size;
      Stack()
      {
        stack_size=0;
      }

      void push(T value)
      {
        if(stack_size+1>MAX_SIZE)
        {
          cout<<"Stack is full!\n";
          return;
        }
        stack_size=stack_size+1;
        a[stack_size-1]=value;
      }

      void pop()
      {
        if(stack_size==0)
        {
           cout<<"Stack is empty!";
           return;
        }
        stack_size=stack_size-1;
      }

      T top()
      {
        if(stack_size==0)
        {
            cout<<"Stack is empty!\n";
            T a;
            return a;
        }
        return a[stack_size-1];
      }
};

int main()
{
    Stack<int> st;
    st.push(3);
    st.push(2);
    st.push(1);
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";

    Stack<double> st1;
    st1.push(3.6);
    st1.push(2.4);
    st1.push(1.9);
    cout<<st1.top()<<"\n";
    st1.pop();
    cout<<st1.top()<<"\n";
    st1.pop();
    cout<<st1.top()<<"\n";
    st1.pop();
    cout<<st1.top()<<"\n";

    Stack<char> st2;
    st2.push('a');
    st2.push('b');
    st2.push('c');
    cout<<st2.top()<<"\n";
    st2.pop();
    cout<<st2.top()<<"\n";
    st2.pop();
    cout<<st2.top()<<"\n";
    st2.pop();
    cout<<st2.top()<<"\n";

    return 0;
}

