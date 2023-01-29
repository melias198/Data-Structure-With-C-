#include<bits/stdc++.h>

using namespace std;



class node
{
public:
    int data;
    node * nxt;
    node * prv;
};

class DoublyLinkedList
{
public:
    node *head;
    int sz;
    DoublyLinkedList()
    {
        head = NULL;
        sz = 0;
    }

    //Creates a new node with the given data and returns it O(1)
    node * CreateNewNode(int data)
    {
        node *newnode = new node;
        newnode->data = data;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }

    //Inserts a node with given data at head O(1)
    void InsertAtHead(int data)
    {
        sz++;
        node *newnode = CreateNewNode(data);
        if(head == NULL)
        {
            head = newnode;
            return;
        }
        node *a = head;
        newnode->nxt = a;
        a->prv = newnode;
        head = newnode;
    }

    //Inserts the given data at the given index O(n)
    void Insert(int index, int data)
    {
        if(index > sz)
        {
            return;
        }
        if(index==0)
        {
            InsertAtHead(data);
            return;
        }
        node *a = head;
        int cur_index = 0;
        while(cur_index!= index-1)
        {
            a = a->nxt;
            cur_index++;
        }
        // a = cur_index - 1
        node *newnode = CreateNewNode(data);
        newnode->nxt = a->nxt;
        newnode->prv = a;
        node *b = a->nxt;
        b->prv = newnode;
        a->nxt = newnode;
        sz++;
    }

    //Deletes the given index O(n)
    void Delete(int index)
    {
        if(index >= sz)
        {
            cout<<index<<" doesn't exist.\n";
            return;
        }
        node *a = head;
        int cur_index = 0;
        while(cur_index != index)
        {
            a = a->nxt;
            cur_index++;
        }
        node *b = a->prv;
        node *c = a->nxt;
        if(b!=NULL)
        {
            b->nxt = c;
        }
        if(c!= NULL)
        {
            c->prv = b;
        }
        delete a;
        if(index==0)
        {
            head = c;
        }
        sz--;
    }

    //Prints the linked list O(n)
    void Traverse()
    {
        node *a = head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a = a->nxt;
        }
        cout<<"\n";
    }

    // Returns the size of linked list O(1)
    int getSize()
    {
        return sz;
    }

    //Reverse the doubly linked list O(n)
    void Reverse()
    {
        if(head==NULL)
        {
            return;
        }
        node *a = head;
        int cur_index = 0;
        while(cur_index != sz-1)
        {
            a = a->nxt;
            cur_index++;
        }
        // last index is in a

        node *b = head;
        while(b!= NULL)
        {
            swap(b->nxt, b->prv);
            b = b->prv;
        }
        head = a;
    }

    void swapNodes( int i, int j)
    {
        node *a = head;
        if (i == j)
            return;

        node *prevX = NULL;
        node *currX = a;
        int cur_index = 0;
        while (currX && cur_index != i)
        {
            prevX = currX;
            currX = currX->nxt;
            cur_index++;
        }
        node *prevY = NULL;
        node *currY = a;
        int cur_index_y = 0;
        while (currY && cur_index_y != j)
        {
            prevY = currY;
            currY = currY->nxt;
            cur_index_y++;
        }
        if (currX == NULL || currY == NULL)
            return;
        if (prevX != NULL)
            prevX->nxt = currY;
        else
            a = currY;
        if (prevY != NULL)
            prevY->nxt = currX;
        else
            a = currX;
        node* temp = currY->nxt;
        currY->nxt = currX->nxt;
        currX->nxt = temp;
    }

     void deleteNode(node *a)
    {
       node *b=a->prv;
       node *c=a->nxt;
        if(b!=NULL)
        {
            b->nxt=c;
        }
        if(c!=NULL)
        {
            c->prv=b;
        }
        delete a;
    }
    void deleteZero()
    {
        if(head == NULL)
            return;
        
        if(head->data==0)
        {
            node *tmp=head;
            head=head->nxt;
            head->prv=NULL;
            delete tmp;
        }
        node* current = head;
        node *next;
        while(current != NULL)
        {
            if(current->data == 0)
            {
                next = current->nxt;
                deleteNode(current);
                current = next;
            }
            else
            {
            current = current->nxt;
            }
        }
    }
};


int main()
{
    DoublyLinkedList dl;
    dl.InsertAtHead(7);
    dl.InsertAtHead(4);
    dl.InsertAtHead(6);
    dl.InsertAtHead(2);
    dl.InsertAtHead(3);
    dl.Traverse();
    dl.swapNodes(1, 4);
    dl.Traverse();

    DoublyLinkedList dl2;
    dl2.InsertAtHead(5);
    dl2.InsertAtHead(0);
    dl2.InsertAtHead(0);
    dl2.InsertAtHead(2);
    dl2.InsertAtHead(0);
    dl2.Traverse();
    dl2.deleteZero();
    dl2.Traverse();
    
    return 0;
}