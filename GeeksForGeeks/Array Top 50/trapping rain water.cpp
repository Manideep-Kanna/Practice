#include<iostream>
using namespace std;
int findWater(int a[],int n){
    int lm[n];
    int rm[n];
    lm[0]=a[0];
    for(int i=1;i<n;i++){
        lm[i]=max(lm[i-1],a[i]);
    }
    rm[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--){
        rm[i]=max(rm[i+1],a[i]);
    }
    int water=0;
    for(int i=0;i<n;i++){
        water+=min(lm[i],rm[i])-a[i];
    }
    return water;
}
/*
INSTEAD OF WASTING TWO ARRAYS WE CAN POINT TWO VARIABLES BECOZ AS WE CAN SEE IN ABOVE PROBLEM
WE ARE INITIALISING LM AND RM ARRAYS THE TILL MAX WE CAN DO THAT WITH TWO VARIABLES ALSO
*/
int main()
{
    int arr[] = { 0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum water that can be accumulated is "
         << findWater(arr, n);
    return 0;
}