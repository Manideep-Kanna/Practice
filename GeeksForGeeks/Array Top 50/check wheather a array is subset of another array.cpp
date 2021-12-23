#include<bits/stdc++.h>
using namespace std;
bool isSubset(int a[],int b[],int m,int n){
    vector<int>v;
    for(int i=0;i<n;i++){
        v[a[i]]++;
    }
    for(int i=0;i<n;i++){
        if(v[b[i]]>0)
        v[b[i]]--;
        else return false;
    }
    return true;

}
int main()
{
    int arr1[] = { 11, 1, 13, 21, 3, 7 };
    int arr2[] = { 11, 3, 7, 1 };
 
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
 
    if (isSubset(arr1, arr2, m, n))
        printf("arr2[] is subset of arr1[] ");
    else
        printf("arr2[] is not a subset of arr1[]");
 
    getchar();
    return 0;
}