#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    bool isnotprime[n]={0};
    isnotprime[0]=isnotprime[0]=1;
    for(int i=2;i<=n;i++){
        if(isnotprime[i]==0){
        if(int j=i*i;j<=n;j+=i)
        isnotprime[j]=1;
        }
    }
    for(int i=2;i<n;i++){
        if(isnotprime[i]==0)
        v.push_back(i);
    }



}
