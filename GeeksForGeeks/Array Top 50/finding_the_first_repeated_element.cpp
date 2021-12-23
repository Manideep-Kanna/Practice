#include<bits/stdc++.h>
using namespace std;
void printFirstRepeating(int a[],int n){
    unordered_set<int>s;
    int k=1999999999;
    for(int i=n-1; i>=0;i--){
        if(s.find(a[i])!=s.end())
           k=min(k,i);
        else
        s.insert(a[i]); 
    }
    cout<<a[k];
    }
int main()
{
    int arr[] = { 10, 3, 5, 4, 3, 5, 6 };
 
    int n = sizeof(arr) / sizeof(arr[0]);
    printFirstRepeating(arr, n);
}