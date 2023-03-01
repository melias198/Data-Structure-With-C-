#include <bits/stdc++.h>

using namespace std;

class node
{
public:
      int value;
      node* Left;
      node* Right;
      
      node(int value)
      {
        this->value=value;
        this->Left=NULL;
        this->Right=NULL;
      }
};

bool isValidBST(node* root,int min,int max);

bool IsBST(node* root)
{
    return isValidBST(root,INT16_MIN,INT16_MAX);
}


bool isValidBST(node* root,int min,int max)
{
    if(root==NULL)
    {
        return true;
    }

    if(root->value<min||root->value>max)
    {
      return false;
    }

    return isValidBST(root->Left,min,root->value-1) && (root->Right,root->value+1,max);
}

      

int main()
{
    node* root=new node(8);
    root->Left=new node(3);
    root->Right=new node(10);
    root->Left->Left=new node(1);
    root->Left->Right=new node(6);
    root->Left->Right->Left=new node(2);
    //cout<<isValidBST(root,INT16_MIN,INT16_MAX);
    cout<<IsBST(root);
    return 0;
}

