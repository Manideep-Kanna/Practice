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
node *buildTree(int in[],int pre[],int start,int end){
    if(start>end)return NULL;
    static int i=0;
    int curr=pre[i++];
    node *head=new node(curr);
    if(start==end)return head;
    int pos=search(in,curr,end);
    head->left=buildTree(in,pre,start,pos-1);
    head->right=buildTree(in,pre,pos+1,end);
    return head;
}
void preoder(node *head){
    if(head==NULL)return;
    cout<<head->data<<" ";
    preoder(head->left);
    preoder(head->right);
}
void inoder(node *head){
    if(head==NULL)return;
    inoder(head->left);
    cout<<head->data;
    inoder(head->right);
}
int main(){
    int in[]={4,2,1,5,3};
    int pre[]={1,2,4,3,5};
    int n=sizeof(in)/sizeof(in[0]);
    node *head=buildTree(in,pre,0,n-1);
    preoder(head);
    cout<<endl;
    inoder(head);
}