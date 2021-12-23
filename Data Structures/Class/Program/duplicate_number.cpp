#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5,6,7};
    int hare=0,tortoise=0;
    int n=sizeof(a)/sizeof(a[0]);
    int i;
    for(i=0;i<n;i++){
        hare=a[a[hare]];
        tortoise=a[tortoise];
        if(hare==tortoise&&i<n-1)
        break;
    }
    if(i==n)cout<<"NO DUPLICATE IS PRESENT ";
    else{
        hare=0;
        while(hare!=tortoise){
            hare=a[hare];
            tortoise=a[tortoise];
        }
        cout<<"DUPLICATE ELEMENT IS "<<hare;
    }
}