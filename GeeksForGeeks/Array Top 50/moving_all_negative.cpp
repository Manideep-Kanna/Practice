#include<iostream>
using namespace std;
void partition_method(int a[],int n){
    for(int i=0;i<n;i++){
       int j=0;
       if(a[i]>0){
           if(i!=j)
               swap(a[i],a[j]);
           j++;
       }
   }
}
void twopointer(int a[],int n){
    int start=0,end=n-1;
   while(start<=end){
       if(a[start]<0)start++;
       else if(a[start]>0)swap(a[start],a[end--]);
   }
}
int main()
{
  int a[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9};
  int n = sizeof(a) /sizeof(a[0]);
partition_method(a,n);
//-1 -3 -7 2 4 6 8 9
twopointer(a,n);
//-1 -7 -3 5 6 4 8 9 2 
}