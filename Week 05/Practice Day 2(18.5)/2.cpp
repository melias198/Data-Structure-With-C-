#include<bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node * nxt;
    node * prv;
};
class DoublyLinkedList {
public:
    node *head;
    int sz;
    DoublyLinkedList() {
        head = NULL;
        sz = 0;
    } //Creates a new node with the given data and returns it O(1) node * CreateNewNode(int data) { node *newnode = new node; newnode->data = data; newnode->nxt = NULL; newnode->prv = NULL; return newnode; } //Inserts a node with given data at head O(1) void InsertAtHead(int data) { sz++; node *newnode = CreateNewNode(data); if(head == NULL) { head = newnode; return; } node *a = head; newnode->nxt = a; a->prv = newnode; head = newnode; }

    node * CreateNewNode(int data) {
        node *newnode = new node;
        newnode->data = data;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    } //Inserts a node with given data at head O(1) void InsertAtHead(int data) { sz++; node *newnode = CreateNewNode(data); if(head == NULL) { head = newnode; return; } node *a = head; newnode->nxt = a; a->prv = newnode; head = newnode; }

    void InsertAtHead(int data) {
        sz++;
        node *newnode = CreateNewNode(data);
        if(head == NULL) {
            head = newnode;
            return;
        }
        node *a = head;
        newnode->nxt = a;
        a->prv = newnode;
        head = newnode;
    }

    void DeleteMid() {

        node *a = head;
        int cur_index = 0;
        int mid=sz/2;
        while(cur_index != mid) {
            a = a->nxt;
            cur_index++;
        }
        node *b = a->prv;
        node *c = a->nxt;
        if(b!=NULL) {
            b->nxt = c;
        }
        if(c!= NULL) {
            c->prv = b;
        }
        delete a;
        sz--;
   }

   int getMax()
   {
    node* a=head;
    int max=head->data;
    while(a!=NULL)
    {
     if(a->data>max)
     {
      max=a->data;
     }
     a=a->nxt;
    }
    return max;
   }

   void deleteMax()
   {
    node* a=head;
    int max=head->data;
    while(a!=NULL)
    {
     if(a->data>max)
     {
      max=a->data;
     }
     a=a->nxt;
    }
    
    node *b=head;
    while(b!=NULL)
    {
     if(b->data==max)
    {
        node *t=b;
        node *c = b->prv;
        node *d = b->nxt;
        if(c!=NULL) {
            c->nxt = d;
        }
        if(d!= NULL) {
            d->prv = c;
        }
        delete t;
        b=c;
    }
    b=b->nxt;
    }
   }
   

    void Traverse() {
        node *a = head;
        while(a!=NULL) {
            cout<<a->data<<" ";
            a = a->nxt;
        }
        cout<<"\n";
    }
};
int main()
{
    DoublyLinkedList dl;
    dl.InsertAtHead(5);
    dl.InsertAtHead(4);
    dl.InsertAtHead(3);
    dl.InsertAtHead(5);
    dl.InsertAtHead(1);
    dl.Traverse();
    //dl.DeleteMid();
   // dl.Traverse();
   
    //cout<<dl.getMax();
    dl.deleteMax();
    dl.Traverse();
    return 0;
}