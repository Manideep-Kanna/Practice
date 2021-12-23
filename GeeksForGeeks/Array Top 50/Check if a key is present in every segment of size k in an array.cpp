#include<iostream>
using namespace std;
bool findxinkindowSize(int a[],int key,int ws,int n){
    if(n==0)return false;
    int i;
    for(i=0;i<n;i+=ws){
        bool k=false;
        for(int j=0;j<ws;j++){
            if(a[i+j]==key){
                k=true;
                break;
            }
        }
        if(!k)return k;
    }
    if(i==n)return true;
   bool k=false;
   if(i>n){
    for(int l=i-ws;l<n;l++){
        if(a[l]==key){
            k=true;
            break;
        }
    }
   }
    return k;
}
int main()
{
    int arr[] = { 3, 5, 2, 4, 9, 3, 1, 7, 3, 11, 12, 3 ,10,8};
    int x = 3, k = 3;
    int n = sizeof(arr) / sizeof(arr[0]);
    if (findxinkindowSize(arr, x, k, n))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}