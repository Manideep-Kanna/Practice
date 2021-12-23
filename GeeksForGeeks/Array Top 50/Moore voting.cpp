#include<iostream>
using namespace std;
void printMajority(int a[],int n){
    int c=1,ele=0;
    for(int i=1;i<n;i++){
        if(a[ele]==a[i])
        c++;
        else
        c--;
    if(c==0){
        ele=i;
        c=1;
    }
    }
   c=0;
   bool flag=false;
    for(int i=0;i<n;i++){
        if(a[ele]==a[i])
            c++;
        if(c>n/2){
            flag=true;
            break;
        }
    }
    // cout<<a[ele]<<endl;
    if(flag)cout<<"The Majority element is"<<a[ele];
    else cout<<"There is no majority element";
}
int main()
{
    int a[] = { 1, 3, 3, 3, 2 };
    int size = (sizeof(a)) / sizeof(a[0]);
 
    // Function calling
    printMajority(a, size);
 
    return 0;
}