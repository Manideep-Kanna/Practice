#include<iostream>
using namespace std;
int maxSubarrayProduct(int a[],int n){
    int maxprod=-199999999;
    int currproduct=1;
    for(int i=0;i<n;i++){
        currproduct*=a[i];
        if(currproduct>maxprod)
        maxprod=currproduct;
        if(currproduct==0){
            currproduct=1;
        }
    }
    return maxprod;
}
int main()
{
    int arr[] = { 1, -2, -3, 0, 7, -8, -2 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum Sub array product is "<< maxSubarrayProduct(arr, n);
    return 0;
}