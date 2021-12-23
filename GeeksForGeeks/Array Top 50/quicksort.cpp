#include<iostream>
using namespace std;
int partition(int a[],int start,int end){ 
    int i=start,j=end;
    int pivot=a[end];
    while(i<j){
        while(a[i]<=pivot)i++;
        while(a[j]>pivot)j--;
        if(i<j)
        swap(a[i],a[j]);
    }
    swap(a[j],a[end]);
}
void quickSort(int a[],int start,int end){
    if(start>=end)
    return;
    int p=partition(a,start,end);
    quickSort(a,start,p-1);
    quickSort(a,p+1,end);
}
int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    cout << "Sorted array: \n";
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    return 0;
}