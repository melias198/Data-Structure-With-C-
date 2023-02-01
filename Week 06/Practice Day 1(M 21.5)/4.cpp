#include <bits/stdc++.h>

using namespace std;

template <class T>
class Stack
{
public:
    T *a;
    int stack_size;
    int array_cap;
    Stack()
    {
        a = new T[1];
        stack_size = 0;
        array_cap = 1;
    }

    void IncreasingCapacity()
    {
        T *tmp;
        tmp = new T[array_cap * 2];
        for (int i = 0; i < array_cap; i++)
        {
            tmp[i] = a[i];
        }
        swap(a, tmp);
        delete[] tmp;
        array_cap = array_cap * 2;
    }

    // Add element in stack is O(1).
    void push(T value)
    {
        if (stack_size + 1 > array_cap)
        {
            IncreasingCapacity();
        }
        stack_size = stack_size + 1;
        a[stack_size - 1] = value;
        DecreaseSize();
    }

    // Delete element in stack is O(1).
    void pop()
    {
        if (stack_size == 0)
        {
            cout << "Stack is empty!";
            return;
        }
        stack_size = stack_size - 1;
        DecreaseSize();
    }

    // Return the top element in stack is O(1).
    T top()
    {
        if (stack_size == 0)
        {
            cout << "Stack is empty!\n";
            T a;
            return a;
        }
        DecreaseSize();
        return a[stack_size - 1];
    }

    void DecreaseSize()
    {
        if (stack_size < array_cap / 2)
        {
            T *tmp;
            tmp = new T[array_cap / 2];
            for (int i = 0; i < stack_size; i++)
            {
                tmp[i] = a[i];
            }
            swap(a, tmp);
            delete[] tmp;
            array_cap = array_cap / 2;
        }
    }
};

int main()
{
    Stack<int> st;
    st.push(3);
    st.push(2);
    st.push(1);
    cout << st.top() << "\n";
    st.pop();
    cout << st.top() << "\n";
    st.pop();
    cout << st.top() << "\n";
    st.pop();
    cout << st.top() << "\n";

    Stack<double> st1;
    st1.push(3.6);
    st1.push(2.4);
    st1.push(1.9);
    cout << st1.top() << "\n";
    st1.pop();
    cout << st1.top() << "\n";
    st1.pop();
    cout << st1.top() << "\n";
    st1.pop();
    cout << st1.top() << "\n";

    Stack<char> st2;
    st2.push('a');
    st2.push('b');
    st2.push('c');
    cout << st2.top() << "\n";
    st2.pop();
    cout << st2.top() << "\n";
    st2.pop();
    cout << st2.top() << "\n";
    st2.pop();
    cout << st2.top() << "\n";
    return 0;
}
