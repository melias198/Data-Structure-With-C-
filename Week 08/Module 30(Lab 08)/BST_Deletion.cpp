#include <bits/stdc++.h>

using namespace std;

class node
{
public:
    int value;
    node *left;
    node *right;
};

class BST
{
public:
    node *root;

    BST()
    {
        root = NULL;
    }

    node *CreateNewNode(int value)
    {
        node *newnode = new node;
        newnode->value = value;
        newnode->left = NULL;
        newnode->right = NULL;
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
        node* curr=root;
        node* prv=NULL;

        while(curr!=NULL)
        {
            if(newnode->value>curr->value)
            {
                prv=curr;
                curr=curr->right;
            }
            else
            {
                prv=curr;
                curr=curr->left;
            }
        }
        if(newnode->value>prv->value)
        {
            prv->right=newnode;
        }
        else
        {
            prv->left=newnode;
        }
    }

    void Delete(int value)
    {
        node* cur=root;
        node* prv=NULL;
        while(cur!=NULL)
        {
            if(value>cur->value)
            {
                prv=cur;
                cur=cur->right;
            }
            else if(value<cur->value)
            {
                prv=cur;
                cur=cur->left;
            }
            else
            {
                break;
            }
        }
        if(cur==NULL)
        {
            cout<<"The value doesn't exist!\n";
            return;
        }
        //Case 1: both child is null
        if(cur->left==NULL && cur->right==NULL)
        {
            if(prv->left!=NULL && prv->left->value==cur->value)
            {
                prv->left=NULL;
            }
            else 
            {
                prv->right=NULL;
            }
            delete cur;
            return;
        }

        //node has one child

        if(cur->left==NULL && cur->right!=NULL)
        {
            if(prv->left!=NULL && prv->left->value==cur->value)
            {
                prv->left=cur->right;
            }
            else 
            {
                prv->right=cur->right;
            }
            delete cur;
            return;
        }

        if(cur->left!=NULL && cur->right==NULL)
        {
            if(prv->left!=NULL && prv->left->value==cur->value)
            {
                prv->left=cur->left;
            }
            else 
            {
                prv->right=cur->left;
            }
            delete cur;
            return;
        }

        //Case 3: node has both child
        node* tmp=cur->right;
        while(tmp->left!=NULL)
        {
            tmp=tmp->left;
        }
        int saved=tmp->value;
        Delete(saved);
        cur->value=saved;
    }

    void BFS()
    {
        queue<node *> q;
        q.push(root);
        while (!q.empty())
        {
            node *a = q.front();
            q.pop();
            int l = -1, r = -1;
            if (a->left != NULL)
            {
                l = a->left->value;
                q.push(a->left);
            }
            if (a->right != NULL)
            {
                r = a->right->value;
                q.push(a->right);
            }

            cout << "Node value = " << a->value << " , Left Child = " << l << " , Right Child = " << r << "\n";
        }
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
    //Case 1
   // bst.Delete(8);
//    bst.BFS();

    //Case 2
//    bst.Delete(7);
//    bst.BFS();

    //Case 3
    bst.Delete(6);
    bst.BFS();

    return 0;
}
