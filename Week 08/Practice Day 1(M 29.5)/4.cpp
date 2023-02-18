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

     int FindDepth(node* a)
     {
      int d=0;
      while(a!=NULL)
      {
        d++;
        a=a->left;
      }
      return d;
     }

     bool IsPerfectRec(node* a,int d,int level=0)
     {
      if(a==NULL)
      {
        return true;
      }
      if(a->left==NULL && a->right==NULL)
      {
        return (d==level+1);
      }

      if(a->left==NULL || a->right==NULL)
      {
        return false;
      }

      return IsPerfectRec(a->left , d ,level + 1) && (a->right , d ,level + 1);

     }

     bool IsPerfect(node* a)
     {
        int d=FindDepth(root);
        return IsPerfectRec(root,d);
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
    if(bt.IsPerfect(bt.root))
    {
       cout<<"Yes"<<"\n";
    }
    else
    {
        cout<<"No"<<"\n";
    }

    return 0;
}

