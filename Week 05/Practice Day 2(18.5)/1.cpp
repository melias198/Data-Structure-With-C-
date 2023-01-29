#include<bits/stdc++.h>
using namespace std;

class node
{
public:
 int data;
 node * next;
};

class LinkedList
{
public:
 node * head;
int sz;
 LinkedList()
 {
  head=NULL;
  sz=0;
 }
 node* CreateNewNode(int data)
 {
  node * newnode=new node;
  newnode->data=data;
  newnode->next=NULL;
  return newnode;
 }
 void InsertAtHead(int data)
 {
  sz++;
  node * a=CreateNewNode(data);
  if(head==NULL)
  {
   head=a;
   return;
  }
  a->next=head;
  head=a;
  } 

  int getValue(int index)
{
 node* a=head;
 int curr_index=0;
 while(a!=NULL)
 {
  if(curr_index==index)
  {
   cout<<a->data<<"\n";
   break;
  }
  a=a->next;
  curr_index++;
 }
}
  
void DeleteZero()
{
node* a=head;
while(a!=NULL)
{
 if(a->data==0)
 {
  node* b=a;
  a=b->next, 
  delete b;
  continue;
 }
 cout<<a->data<<" ";
 a=a->next;
}
cout<<"\n";
}

int OddSum()
{
node* a=head;
int curr_index=0;
int sum=0;
while(a!=NULL)
{
 if(curr_index%2==1)
{
 sum=sum+a->data;
}
a=a->next;
curr_index++;
}
return sum;
}

bool getDuplicate()
{
  node * a=head;
  while(a!=NULL)
 {
   node * b=a->next;
   while(b!=NULL)
   {
     if(a->data==b->data)
     {
       return true;
     }
     b=b->next;
   }
   a=a->next;
   }
   return false;
}
  
  void Travers()
{
  node* a=head;
  while(a!=NULL)
{
  cout<<a->data<<" ";
  a=a->next;
}
 cout<<"\n";
}
};

int main()
{
    LinkedList l;
    l.InsertAtHead(5);
    l.InsertAtHead(4);
    l.InsertAtHead(3);
    l.InsertAtHead(5);
    l.InsertAtHead(2);
    l.Travers();
  //  l.getValue(0);
   // l.DeleteZero();
   /// int ans=l.OddSum();
  //  cout<<ans<<"\n";
    bool ans= l.getDuplicate();
    if(ans)
    cout<<"True";
    else
    cout<<"False";
    return 0;
}