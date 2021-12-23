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
node * sumreplacement(node *head){
    if(head==NULL)return NULL;
    int sum=0;
    if(head->left){
    head->left=sumreplacement(head->left);
    sum+=head->left->data;
    }
    if(head->right){
    head->right=sumreplacement(head->right);
    sum+=head->right->data;
    }
    head->data=head->data+sum;
    return head;
}
void levelorder(node *head){
    if(head==NULL)return;
queue<node*>q;
q.push(head);
q.push(NULL);
while(!q.empty()){
    node *temp=q.front();
    q.pop();
    if(temp!=NULL){
        cout<<temp->data<<" ";
    if(temp->left)q.push(temp->left);
    if(temp->right)q.push(temp->right);
    }
    else if(!q.empty()){
        q.push(NULL);
    }
}
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
head=sumreplacement(head);
levelorder(head);
}