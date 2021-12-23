#include<iostream>
#include<queue>
#include<cmath>
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
node *insert(node *head,int d){
    
    node*newnode=new node(d);
    if(head==NULL){
        head=newnode;
        return head;
    }
    if(d<=head->data)head->left=insert(head->left,d);
    else head->right=insert(head->right,d);
    return head;
}
int height(node*head){
    if(head==NULL)return 0;
    return(max(height(head->left),height(head->right))+1);
}
int diameter(node *head){
    if(head==NULL)return 0;
    int h=height(head->left)+height(head->right)+1;
    int d=max(diameter(head->left),diameter(head->right));
    return(max(d,h));
}
int main(){
node*head=NULL;
head=insert(head,17);
head=insert(head,20);
head=insert(head,8);
head=insert(head,7);
head=insert(head,6);
head=insert(head,5);
head=insert(head,4);
head=insert(head,9);
head=insert(head,10);
head=insert(head,11);
head=insert(head,12);
head=insert(head,13);
    cout << "Diameter of the given binary tree is "<<diameter(head);
}