#include <bits/stdc++.h>
using namespace std;

class bstree
{
    public:
        int data;
        bstree *left;
        bstree *right;
    bstree()
    {
        data;
        left=right=NULL;
    } 
    bstree(int val)
    {
        data=val;
        left=right=NULL;
    }

    bool empty(bstree *root)
    {
        return root==NULL;
    }

    bstree *insert(bstree *root,int val)
    {
        if(root==NULL)
        {
            bstree *root=new bstree(val);
            return root;
        }
        else if(val < root->data)
        {
            root->left=insert(root->left,val);
        }
        else
        {
            root->right=insert(root->right,val);
        }
        return root;
    }

    bool search(bstree *root,int key)
    {
        if(empty(root))
            return false;
        if(root->data==key)
        {
            return true;
        }    
        else if(key>root->data)
            return search(root->right,key);
        else
            return search(root->left,key);
    }

    void inorder(bstree *root)
    {
        if(root==NULL)
        {
            return;
        }
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
    
    void preorder(bstree *root)
    {
        if(root==NULL)
        {
            return;
        }
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }

    void postorder(bstree *root)
    {
        if(root==NULL)
        {
            return;
        }
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
};

int main()
{
    vector <int> v={8,5,3,1,4,6,10,11,14};
    bstree *root=NULL;
    bstree tree;
    for(auto &i: v)
    {
        root=tree.insert(root,i);
    }   
    cout<<"Inorder Traversal";
    tree.inorder(root);
    cout<<endl;
    cout<<"Preorder Traversal";
    tree.preorder(root);
    cout<<endl;
    cout<<"Postorder Traversal";
    tree.postorder(root);
    cout<<endl;

}