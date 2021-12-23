#include<iostream>
using namespace std;
int t[1002][1002];
int knapSack(int W,int wt[],int val[],int n){
    if(n==0||W==0)
    return 0;
    if(t[n][W]!=-1)
    return t[n][W];
    if(wt[n-1]>W)
    return t[n][W]=knapSack(W,wt,val,n-1);
    else
    return t[n][W]=max(knapSack(W,wt,val,n-1),val[n-1]+knapSack(W-wt[n-1],wt,val,n-1));
}
int main()
{
    int val[] = { 60, 100, 120 };
    int wt[] = { 10, 20, 30 };
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);
    for(int i=0;i<1002;i++)
    for(int j=0;j<1002;j++)
    t[i][j]=-1;
    cout << knapSack(W, wt, val, n);
    return 0;
}