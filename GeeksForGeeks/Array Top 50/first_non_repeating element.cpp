#include<bits/stdc++.h>
using namespace std;
int firstNonRepeating(int a[],int n){
    unordered_map<int,int>m;
    for(int i=0;i<n;i++){
        m[a[i]]++;
    }
    for(int i=0;i<n;i++){
        if(m[a[i]]==1)
        return a[i];
    }
    return -1;
}
int main()
{
    int arr[] = { 9, 4, 9, 6, 7, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << firstNonRepeating(arr, n);
    return 0;
}