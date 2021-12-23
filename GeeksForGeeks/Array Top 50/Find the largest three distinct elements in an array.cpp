#include<iostream>
using namespace std;
void find3largest(int a[],int n){
    int first=-199999999,second=-19999999,third=-19999999;
    for(int i=0;i<n;i++){
        if(a[i]>first){
            third=second;
            second=first;
            first=a[i];
        }
        else if(a[i]>second&&a[i]!=first){
            third=second;
            second=a[i];
        }
        else if(a[i]>third&&a[i]!=second&&a[i]!=first){
            third=a[i];
        }
    }
    cout<<first<<" "<<second<<" "<<third<<" ";
}
int main()
{
    int arr[] = { 12, 1,54,54,-1, 45, 54, 23, 5, 0, -10 };
    int n = sizeof(arr) / sizeof(arr[0]);
    find3largest(arr, n);
}