#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> a={5,4,6,2,1};
    int temp = a[0];
    cout<<a[4]<<endl;
    for(int i=1;i<=4;i++){
       
        a[i-1]=a[i];
   
    }
    a[4]=temp;
    for(int i=0;i<=4;i++){
        cout<<a[i]<<" ";

    }
    return 0;
}