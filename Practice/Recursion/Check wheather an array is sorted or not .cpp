#include<iostream>
using namespace std;
bool check(int a[],int n){
    if(n==1)return true;
    bool restarray=check(a+1,n-1);
    return a[0]<a[1]&&restarray;
}
int main(){
int a[]={1,2,3,4,6};
cout<<check(a,6);
}