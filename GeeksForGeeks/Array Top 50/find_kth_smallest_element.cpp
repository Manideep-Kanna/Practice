#include<bits/stdc++.h>
using namespace std;
int main(){
    //NORMALLY WE CAN SORT THE ARRAY AND PRINT THE KTH ELEMENT
    //IF INTERVIEWER ASKS OTHER METHOD THEN SAY U USE MAPS
      int n = 5;
    int k = 2;
    vector<int> arr = { 12, 3, 5, 7, 19 };
    map<int,int>m;
    int sum=0;
    for(auto i :arr){
        m[i]++;
    }
    for(auto it=m.begin();it!=m.end();it++){
        sum+=it->second;
          if(sum==k){
            cout<<it->first;
            break;
        }
    }
}