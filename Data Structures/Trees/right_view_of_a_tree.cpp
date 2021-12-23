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
void preoder(node *head){
    if(head==NULL)return;
    cout<<head->data<<" ";
    preoder(head->left);
    preoder(head->right);
}
void rightview(node *head){
if(head==NULL)return;
queue<node*>q;
q.push(head);
while(!q.empty()){
    int n=q.size();
    for(int i=0;i<n;i++){
         node *temp=q.front();
         q.pop();
         if(i==n-1)cout<<temp->data<<" ";
         if(temp->left)q.push(temp->left);
         if(temp->right)q.push(temp->right);
    }
    
}
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
rightview(head);
}