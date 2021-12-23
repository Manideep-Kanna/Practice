#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,5,1};
    int x=0,y=0;
    for(int i=0;i<5;i++)x^=a[i];
    for(int i=1;i<=5;i++)y^=i;
    cout<<(x^y);
    // for(int i=0;i<n;i++){
    //     if(a[i]&&(1<<2))
    // }
    //SEE IN THE SCREENSHOT I THINK ITZ NOT THAT IMPORTANT

    
}