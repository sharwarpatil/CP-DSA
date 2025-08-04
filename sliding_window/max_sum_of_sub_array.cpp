#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> x={1,2,3,1,5,9,7,8};
    int k;cin>>k;
    int l=0,r=0;
    int sum=0;
    while(r<k){
        sum+=x[r];
        r++;
    }
    int maxSum=0;
    while(r<x.size()){
        sum=sum+x[r]-x[l];
        maxSum=max(maxSum,sum);
        r++;
        l++;
    }
    cout<<maxSum;
    return 0;
}
