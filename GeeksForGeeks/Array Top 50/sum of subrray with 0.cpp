#include<bits/stdc++.h>
using namespace std;
bool subArrayExists(int a[],int n){
    unordered_set<int>s;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(s.find(sum)!=s.end()||sum==0||a[i]==0)
        return true;
        else s.insert(sum);
    }
    return  false;
}
int main()
{
    int arr[] = { 4,2,-3,1,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    if (subArrayExists(arr, n))
        cout << "Found a subarray with 0 sum";
    else
        cout << "No Such Sub Array Exists!";
    return 0;
}