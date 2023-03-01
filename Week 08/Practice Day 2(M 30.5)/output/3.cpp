#include <bits/stdc++.h>

using namespace std;

class node
{
public:
      int value;
      node* Left;
      node* Right;
};

class BST
{
public:
      node* root;

      BST()
      {
        root=NULL;
      }

      node* CreateNewNode(int value)
      {
        node* newnode=new node;
        newnode->value=value;
        newnode->Left=NULL;
        newnode->Right=NULL;
        return newnode;
      }

      void Insert(int value)
      {
        node* newnode=CreateNewNode(value);
        if(root==NULL)
        {
            root=newnode;
            return;
        }

        node* cur=root;
        node* prv=NULL;
        
        while(cur!=NULL)
        {
            if(value>cur->value)
            {
                prv=cur;
                cur=cur->Right;
            }
            else
            {
                prv=cur;
                cur=cur->Left;
            }
        }
        if(newnode->value>prv->value)
        {
            prv->Right=newnode;
        }
        else
        {
            prv->Left=newnode;
        }
      }

      int GetMax()
      {
        node* cur=root;
        while(cur->Right!=NULL)
        {
            cur=cur->Right;
        }
        return cur->value;
      }
};

int main()
{
    BST bst;
    bst.Insert(6);
    bst.Insert(4);
    bst.Insert(3);
    bst.Insert(5);
    bst.Insert(7);
    bst.Insert(8);
    cout<<bst.GetMax();
    return 0;
}

