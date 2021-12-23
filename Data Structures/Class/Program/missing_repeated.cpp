#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int x=a[0];
    for(int i=1;i<n;i++){
        x^=a[i];
    }
    int y=1;
    for(int i=2;i<=n;i++){
        y^=i;
    }
    int l=x^y;
    cout<<l;

}