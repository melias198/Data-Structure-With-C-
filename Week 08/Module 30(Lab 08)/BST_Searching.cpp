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

    bool Search(int value)
    {
        node* cur=root;
        while(cur!=NULL)
        {
            if(value>cur->value)
            {
                cur=cur->right;
            }
            else if(value<cur->value)
            {
                cur=cur->left;
            }
            else
            {
                return true;
            }
        }
        return false;
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
    cout<<bst.Search(4)<<"\n";
    bst.BFS();
    return 0;
}
