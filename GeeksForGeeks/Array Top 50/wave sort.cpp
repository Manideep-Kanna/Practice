#include<iostream>
using namespace std;
void sortInWave(int a[],int n){
    for(int i=1;i<n;i+=2){
        if(a[i]>a[i-1])swap(a[i-1],a[i]);
        if(a[i]>a[i+1])swap(a[i],a[i+1]);
    }
}
int main()
{
    int arr[] = {10, 90, 49, 2, 1, 5, 23};
    int n = sizeof(arr)/sizeof(arr[0]);
    sortInWave(arr, n);
    for (int i=0; i<n; i++)
       cout << arr[i] << " ";
    return 0;
}