#include<iostream>
using namespace std;
int leftpossible(int a[],int n,int k){
int start=0,end=n;
int l=0;
while(start<=end){
int mid=start-(start-end)/2;
if(k==a[mid]){
l=mid;
end=mid-1;
}
else if(k<a[mid])end=mid-1;
else start=mid+1;
}
return l;
}
int rightpossible(int a[],int n,int k){
int start=0,end=n;
int l=0;
while(start<=end){
int mid=start-(start-end)/2;
if(k==a[mid]){
l=mid;
start=mid+1;
}
else if(k<a[mid])end=mid-1;
else start=mid+1;
}
return l;
}
int count(int a[],int n,int k){
    return rightpossible(a,n,k)-leftpossible(a,n,k);
}
int main() {
    int a[] = {0, 5, 5, 5, 4};
    int x = 5;
    int n = sizeof(a)/sizeof(a[0]);
    cout << count(a, n-1, x);
    return 0;
}