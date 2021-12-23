// C++ program for diagnoal
// traversal of Binary Tree
#include <bits/stdc++.h>
using namespace std;
 
// Tree node
struct Node
{
    int data;
    Node *left, *right;
};
void diagnolPrintUtil(Node*root,int hd,map<int,vector<int>>&m){
    if(root==NULL)return;
    m[hd].push_back(root->data);
    diagnolPrintUtil(root->left,hd+1,m);
    diagnolPrintUtil(root->right,hd,m);
}
void diagonalPrint(Node* root)
{
     
    // create a map of vectors
    // to store Diagonal elements
    map<int, vector<int> > diagonalPrint;
    diagnolPrintUtil(root, 0, diagonalPrint);
 
    cout << "Diagonal Traversal of binary tree : \n";
    for (auto it :diagonalPrint)
    {
        vector<int> v=it.second;
        for(auto it:v)
          cout<<it<<" ";
        cout<<endl;
    }
}

Node* newNode(int data)
{
    Node* node = new Node;
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

// Driver program
int main()
{
    Node* root = newNode(8);
    root->left = newNode(3);
    root->right = newNode(10);
    root->left->left = newNode(1);
    root->left->right = newNode(6);
    root->right->right = newNode(14);
    root->right->right->left = newNode(13);
    root->left->right->left = newNode(4);
    root->left->right->right = newNode(7);
 
    diagonalPrint(root);
 
    return 0;
}