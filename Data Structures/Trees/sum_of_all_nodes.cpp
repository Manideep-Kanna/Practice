#include<iostream>
#include<queue>
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
int sum(node*head){
    if(head==NULL)return 0;
    return(sum(head->left)+sum(head->right)+head->data);
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
cout<<sum(head);
}