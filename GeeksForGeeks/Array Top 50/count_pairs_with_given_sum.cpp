#include<bits/stdc++.h>
using namespace std;
int getPairsCount(int a[],int n,int sum){
    int ct=0;
    unordered_map<int,int>m;
    for(int i=0;i<n;i++){
        int x=sum-a[i];
        if(m[x])
            ct+=m[x];
        m[a[i]]++;
    }
    return ct;
}
int main()
{
    int arr[] = { 1, 5, 7, -1, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 6;
    cout << "Count of pairs is "
         << getPairsCount(arr, n, sum);
    return 0;
}
