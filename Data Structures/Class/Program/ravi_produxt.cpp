#include<bits/stdc++.h>
using namespace std;
int main(){
    //$1A23B4560;
    int sum=0;
    string s;
    cin>>s;
    string k;
    for(int i=0;i<s.size();i++){
        if(isdigit(s[i])){
            k.push_back(s[i]);
        }
        else{
            sum+=stoi(k);
            k.erase();
        }
    }
}