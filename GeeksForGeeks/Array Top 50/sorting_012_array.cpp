#include<iostream>
using namespace std;
void swap(int &a,int &b){
 a^=b;
 b^=a;
 a^=b;
}
void sort012(int a[],int n){
    int low=0,mid=0,high=n;
    while(mid<=high){
        if(a[mid]==1)mid++;
        else if(a[mid]==0)swap(a[low++],a[mid++]);
        else swap(a[mid],a[high--]);
    }
}
int main()
{
    int arr[] = { 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    sort012(arr, n);
 
    cout << "array after segregation ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } 
    return 0;
}