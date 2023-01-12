#include <bits/stdc++.h>

using namespace std;

class node
{
public:
    int data;
    node *nxt; 
};

class LinkedList
{
public:
    node *head;
    LinkedList()
    {
        head = NULL;
    }
    // Create New Node
    node *CreateNewNode(int value)
    {
        node *newnode = new node;
        newnode->data = value;
        newnode->nxt = NULL;
        return newnode;
    }
    // insert new value into head
    void InsertationAtHead(int value)
    {
        node *a = CreateNewNode(value);
        if (head == NULL)
        {
            head = a;
            return;
        }
        // if head not is to NULL
        a->nxt = head;
        head = a;
    }
    // Print the linked list
    void Travers()
    {
        node *a = head;
        while (a != NULL)
        {
            cout << a->data << " ";
            a = a->nxt;
        }
        cout << "\n";
    }

    int SearchDistinctValue(int value)
    {
        node *a = head;
        int index = 0;
        while (a != NULL)
        {
            if (a->data == value)
            {
                return index;
            }
            a = a->nxt;
            index++;
        }
        return -1;
    }

    void SearchAllOccurrence(int value)
    {
        node *a = head;
        int index = 0;
        while (a != NULL)
        {
            if (a->data == value)
            {
                cout << value << " is found at index " << index << "\n";
            }
            a = a->nxt;
            index++;
        }
    }
};

int main()
{
    LinkedList l;
    l.InsertationAtHead(20);
    l.InsertationAtHead(40);
    l.InsertationAtHead(60);
    l.InsertationAtHead(80);
    l.InsertationAtHead(40);
    l.Travers();
    cout << "The value found index is " << l.SearchDistinctValue(20) << "\n";
    cout << "The value found index is " << l.SearchDistinctValue(40) << "\n";
    l.SearchAllOccurrence(40);
    return 0;
}
