#include <bits/stdc++.h>

using namespace std;

class node
{
public:
    int data;
    node* next;
};

class LinkList
{
public:
    node* head;
    int sz;
    LinkList()
    {
        head = NULL;
        sz=0;
    }

    // Create a new node with data
    node*  CreateNewNode(int value)
    {
        node* newnode = new node;
        newnode->data = value;
        newnode->next = NULL;
        return newnode;
    }
    // Insert new value at Head
    void InsertAtHead(int value)
    {
        sz++;
        node* a = CreateNewNode(value);
        if(head == NULL)
        {
            head = a;
            return;
        }
        a->next = head;
        head = a;
    }
    // Prints the linked list
    void Traverse()
    {
        node* a = head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a = a->next;
        }
        cout<<endl;
    }

    int getSize()
    {
        return sz;
    }

    int getIndx(int index)
    {
        node* a = head;
        if(index<0 || index>sz)
        {
            return -1;
        }
        int curr_index = 0;
        while(index != curr_index){
            a = a->next;
            curr_index++;
        }
        return a->data;
    }

    void assignmentValueIndex(int index, int value){
        node* a = head;
        if(index<0 || index>sz){
            return;
        }
        int curr_index = 0;
        while(index!=curr_index)
        {
            a = a->next;
            curr_index++;
        }
        a->data = value;
    }
    void insertionSort()
    {
        for (int step = 1; step < sz; step++)
        {
            int key = getIndx(step);
            int j = step - 1;

            while (key < getIndx(j)&& j >= 0)
            {
                //getIndx[j + 1] = getIndx[j];
                assignmentValueIndex(j+1, getIndx(j));
                --j;
            }
            //getIndx[j + 1] = key;
            assignmentValueIndex(j+1, key);
        }
    }

    };

    int main()
    {
        LinkList l;
        l.InsertAtHead(10);
        l.InsertAtHead(50);
        l.InsertAtHead(40);
        l.InsertAtHead(20);
        l.InsertAtHead(90);
        l.InsertAtHead(30);
        l.insertionSort();
        l.Traverse();

        return 0;
    }
