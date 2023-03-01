#include <bits/stdc++.h>

using namespace std;

class node
{
public:
      int id;
      node* left;
      node* right;
      node* parent;
};

class BinaryTree
{
public:
       node* root;
       BinaryTree()
      {
        root=NULL;
      }

      node* CreateNewNode(int id)
      {
        node* newnode=new node;
        newnode->id=id;
        newnode->left=NULL;
        newnode->right=NULL;
        newnode->parent=NULL;
        return newnode;
      }

      void Insertion(int id)
      {
        node* newnode=CreateNewNode(id);
        if(root==NULL)
        {
            root=newnode;
            return;
        }
        queue<node*>q;
        q.push(root);
        while(!q.empty())
        {
            node* a=q.front();
            q.pop();
            if(a->left!=NULL)
            {
                q.push(a->left);
            }
            else
            {
                a->left=newnode;
                newnode->parent=a;
                return;
            }
            if(a->right!=NULL)
            {
                q.push(a->right);
            }
            else
            {
                a->right=newnode;
                newnode->parent=a;
                return;
            }
        }
      }

     int CountNodes(node* a)
     {
       if(a==NULL)
       {
        return 0;
       }
       return (1+CountNodes(a->left)+CountNodes(a->right));
     }

     bool IsComplete(node* a,int index,int number_node)
     {
       if(a==NULL)
       {
        return true;
       }
       if(index>=number_node)
       {
        return false;
       }
       return (IsComplete(a->left,2*index+1,number_node) && IsComplete(a->right,2*index+1,number_node));
     }
};

int main()
{
    BinaryTree bt;
    bt.Insertion(0);
    bt.Insertion(1);
    bt.Insertion(2);
    bt.Insertion(3);
    bt.Insertion(4);
    bt.Insertion(5);
    bt.Insertion(6);
    bt.Insertion(7);
    int count_node=bt.CountNodes(bt.root);
    int index=0;
    if(bt.IsComplete(bt.root,index,count_node))
    {
        cout<<"YES"<<"\n";
    }
    else
    {
        cout<<"No"<<"\n";
    }
    return 0;
}

