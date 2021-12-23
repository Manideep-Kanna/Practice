#include<iostream>
using namespace std;
int findWater(int a[],int n){
    int lm=0,rm=0,water=0;
    int low=0,high=n-1;
    while(low<=high){
        if(a[low]<a[high]){
        if(a[low]>lm)
        lm=a[low];
        else
        water+=lm-a[low];
        low++;
        }
        else {
            if(a[high]>rm)
            rm=a[high];
            else
            water+=rm-a[high];
            high--;
        }
        }
        return water;
    }
int main()
{
    int arr[] = { 0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum water that can be accumulated is "
         << findWater(arr, n);
    return 0;
}