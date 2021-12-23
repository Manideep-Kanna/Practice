#include<iostream>
using namespace std;
int equilibrium(int a[],int n){
    int left[n],right[n];
    for(int i=0;i<n;i++){
        if(i)
        left[i]=left[i-1]+a[i];
        else 
        left[i]=a[i];
    }
    for(int i=n-1;i>=0;i--){
        if(i<n-1)
        right[i]=right[i+1]+a[i];
        else
        right[i]=a[i];
    }
    for(int i=0;i<n;i++)
    if(left[i]==right[i])
    return i;
return -1;
}
int main()
{
    int arr[] = { -7, 1, 5, 2, -4, 3, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "First Point of equilibrium is at index "
         << equilibrium(arr, n) << "\n";
    return 0;
}
