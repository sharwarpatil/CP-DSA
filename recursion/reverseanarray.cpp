#include<iostream>
#include<algorithm>
using namespace std;

void revarray(int x[],int i,int n){
    if(i>=n/2){
        return ;
    }
    swap(x[i],x[n-i-1]);
    revarray(x,i+1,n);
    
}

int main(){

 int a[]= { 1, 2, 3, 4, 5,6 };
 int n = sizeof(a)/sizeof(a[0]);
  for(int i=0;i<6;i++){
    cout<<a[i]<<" ";
 }
 cout<<endl;
 revarray(a,0,n);
 for(int i=0;i<6;i++){
    cout<<a[i]<<" ";
 }
}