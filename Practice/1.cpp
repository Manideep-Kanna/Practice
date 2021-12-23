#include<iostream>
using namespace std;
int main(){
    int a[]={0,0,0,1,1,1,0,1,1,0,1,1,0,0,1,1,1,1,0,1,0,1,1,0,0,0,1,0,1,0,1,0,1,0};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n-1;){
        if(a[i]==a[i+1]){
            a[i]=0;
            a[i+1]=1;
            i+=2;
        }
        else{
            if(i==n-2)a[n-1]=!a[n-1];
            a[i]=!a[i];
            i++;
        }

       }
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
}