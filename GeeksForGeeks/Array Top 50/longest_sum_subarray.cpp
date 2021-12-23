#include<iostream>
using namespace std;
int maxSubArraySum(int a[],int n){
    int maxsum=-1999999999;
    int currsum=0;  
    for(int i=0;i<n;i++){
        currsum+=a[i];
        if(currsum>maxsum)
        maxsum=currsum;
        if(currsum<0)
        currsum=0;
    }
    return maxsum;
}
int main()
{
    int a[] = {-2, -3, -4, 1, 2, -1, -5, -3};
    int n = sizeof(a)/sizeof(a[0]);
    int max_sum = maxSubArraySum(a, n);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}