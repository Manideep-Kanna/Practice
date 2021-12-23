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
bool check(node *head){
    if(head==NULL)return true;
    if(check(head->left)==false)return false;
    if(check(head->right)==false)return false;
    int lh=height(head->left);
    int rh=height(head->right);
    if(lh-rh<2)return true;
    else return false;

}
int main(){
node*head=NULL;
head=insert(head,8);
head=insert(head,6);
head=insert(head,5);
head=insert(head,7);
head=insert(head,4);
head=insert(head,17);
head=insert(head,16);
head=insert(head,22);
head=insert(head,4);
head=insert(head,3);
head=insert(head,2);
head=insert(head,1);
cout<<check(head);
}
