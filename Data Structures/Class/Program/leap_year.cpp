#include<iostream>
using namespace std;
int main(){
    int year;
    cin>>year;
    int day=256;
    if(y<1918){
        if(y%4==0){
            cout<<"12.09."<<y;
        }
        else{
            cout<<"13.09."<<y;
        }
    }
    else if(y>1918){
        if(y%400==0||(y%4==0&&y%100!=0)){
               cout<<"12.09."<<y;
        }
        else{
            cout<<"13.09."<<y;
        }
    }
    else{
        cout<<"26.09.1918";
    }
}