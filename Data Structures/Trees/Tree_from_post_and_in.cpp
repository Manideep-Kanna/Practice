#include<iostream>
using namespace std;
struct node{
    int data;
    node *left;
    node *right;
    node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
};
int search(int in[],int k,int n){
    for(int i=0;i<=n;i++)
    if(k==in[i])return i;
    return -1;
}
node*buildTree(int post[],int in[],int start,int end){
    if(start>end)return NULL;
    static int i=end;
    int curr=post[i--];
    node *head=new node(curr);
    if(start==end)return head;
    int pos=search(in,curr,end);
    head->right=buildTree(post,in,pos+1,end);
    head->left=buildTree(post,in,start,pos-1);
    return head;
}
void inoder(node *head){
    if(head==NULL)return;
    inoder(head->left);
    cout<<head->data;
    inoder(head->right);
}
void postoder(node *head){
    if(head==NULL)return;
    postoder(head->left);
    postoder(head->right);
    cout<<head->data;
}
int main(){
     int in[] = { 4, 8, 2, 5, 1, 6, 3, 7 };
    int post[] = { 8, 4, 5, 2, 6, 7, 3, 1 };
    int n=sizeof(post)/sizeof(post[0]);
    node *head=buildTree(in,post,0,n-1);
    inoder(head);
    cout<<endl;
    postoder(head);
}