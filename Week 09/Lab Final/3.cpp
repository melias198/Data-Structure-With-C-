#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
      int value;
      Node* nxt;
      Node* prv;
};

class LinkedList
{
public:
      Node* head;
      Node* tail;
      int size;
      LinkedList()
      {
        head=NULL;
        tail=NULL;
        size=0;
      }
      Node* CreateNewNode(int value)
      {
        Node* newnode=new Node;
        newnode->value=value;
        newnode->prv=NULL;
        newnode->nxt=NULL;
        return newnode;
      }

      void insertHead(int value)
      {
        Node* newnode=CreateNewNode(value);
        size++;
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
            return;
        }
        newnode->nxt=head;
        head->prv=newnode;
        head=newnode;
      }

      void insertTail(int value)
      {
        Node* newnode=CreateNewNode(value);
        size++;
        if(tail==NULL)
        {
         tail=newnode;
         head=newnode;
         return;
        }
        tail->nxt=newnode;
        newnode->prv=tail;
        tail=newnode;
      }

      void insertMid(int value)
      {
        if(size==0)
        {
          insertHead(value);
          return;
        }
        int mid=size/2;
        Node* a=head;
        int curr_index=0;
        while(curr_index!=mid-1)
        {
          a=a->nxt;
          curr_index++;
        }
        size++;
        Node* newnode=CreateNewNode(value);
        newnode->nxt=a->nxt;
        newnode->prv=a;
        Node* b=a->nxt;
        b->prv=newnode;
        a->nxt=newnode;
      }

      void print()
      {
        Node * a=head;
        while(a!=NULL)
        {
            cout<<a->value<<" ";
            a=a->nxt;
        }
        cout<<"\n";
      }
      
     void Merge(LinkedList b)
     {
      Node* a=tail;
      Node* tmp=b.head;
      a->nxt=tmp;
      tmp->prv=a;
     }
    
};

int main()
{
  LinkedList a;
  LinkedList b;
	a.insertHead(1);
	a.insertTail(5);
	a.insertMid(3);
	a.insertHead(0);
	a.insertTail(10);
	a.print(); // prints  0 1 3 5 10
    b.insertHead(10);
	b.insertTail(50);
	b.insertMid(30);
	b.insertHead(9);
	b.insertTail(100);
	b.print(); // prints  9 10 30 50 100
	
	a.Merge(b);
	a.print(); // prints  0 1 3 5 10 9 10 30 50 100
	b.print(); // prints  9 10 30 50 100

  return 0;
}

