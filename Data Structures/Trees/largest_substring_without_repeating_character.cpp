#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<int>alpha(256,-1);
    int ans=0;
    int start=-1;
    for(int i=0;i<s.size();i++){
        if(alpha[int(s[i])]>start)
        start=alpha[int(s[i])];
        alpha[int(s[i])]=i;
        ans=max(ans,i-start);
    }

}
