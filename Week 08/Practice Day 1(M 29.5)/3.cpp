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

      int height(node* a)
      {
        if(a==NULL)
        {
            return 0;
        }
       
        return max(height(a->left),height(a->right)+1);
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
    cout<<bt.height(bt.root)<<'\n';
    return 0;
}

