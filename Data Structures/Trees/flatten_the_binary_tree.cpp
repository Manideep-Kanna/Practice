#include<iostream>
using namespace std;
struct node{
    int data;
    node*left;
    node*right;
    node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
    
};
void flatten(node*root){
    if(root==NULL||(root->left==NULL&&root->right==NULL))
    return;
        flatten(root->left);
        node *temp=root->right;
        root->right=root->left;
        root->left=NULL;
        node *t=root;
        while(t->right!=NULL)
        t=t->right;
        t->right=temp;
        flatten(root->right);
}
void inorder(node *root){
    if(root==NULL)return;
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
}
int main()
{
    /*    1
        /   \
       2     5
      / \     \
     3   4     6 */
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(5);
    root->left->left = new node(3);
    root->left->right = new node(4);
    root->right->right =new node(6);
 
    flatten(root);
 
    cout << "The Inorder traversal after "
            "flattening binary tree ";
    inorder(root);
    return 0;
}