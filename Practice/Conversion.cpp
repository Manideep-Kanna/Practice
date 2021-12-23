#include<iostream>
using namespace std;
string decimaltobase(int n,int base){
string ans;
int x=1;
while(x<=n)
x*=base;
x/=base;
while(x){
    int res=n/x;
    n-=res*x;
    if(res<=9)
    ans.push_back(res+'0');
    else
    ans.push_back(res-10+'A');
    x/=base;
}
return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<"BINARY NUMBER IS \n"<<decimaltobase(41854,2);
    cout<<"OCTAL NUMBER IS \n"<<decimaltobase(41854,8);
    cout<<"HEXADECIMAL NUMBER IS "<<decimaltobase(41854,16);
}