#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> x={1,2,3,1,5,9,7,8};
    int k;cin>>k;
    int l=0,r=0;
    int sum=0;
    while(r<x.size()){
        sum+=x[r];
    }
    int maxSum=0;
    for(int i=k;i<x.size();i++){
        sum=sum+x[i]-x[i-k];
        maxSum=max(maxSum,sum);
    }
    return 0;
}
