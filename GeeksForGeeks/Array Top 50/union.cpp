#include<iostream>
using namespace std;
void printUnion(int a[],int b[],int m,int n){
    // int l;
    // l=(m>n)?m:n;
    // int c[l];
    int i=0,j=0,k=0;
    while(i<m&&j<n){
        if(a[i]>b[j])
        cout<<b[j++]<<" ";
        else if(b[j]>a[i])
        cout<<a[i++]<<" ";
        else {
            cout<<a[i++];
            j++;
        }
    }
    
}
int main()
{
    int arr1[] = { 1, 2, 4, 5, 6 };
    int arr2[] = { 2, 3, 5, 7 };
 
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
 
    // Function calling
    printUnion(arr1, arr2, m, n);
 
    return 0;
}