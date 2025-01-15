#include<iostream>
#include <vector>
using namespace std;

vector<int> insertion_sort(vector<int> a,int size){
    for(int i=1;i<size;i++){
        int j=i-1;
        int temp=a[i];
        for(;j>=0;j--){
            if(a[j]>temp){
                a[j+1]=a[j];
            }else{
                break;

            }

        }
        a[j+1]=temp;

    }
    return a;
}

int main(){
    vector<int> arr{3,8,2,15,9};
    int size=arr.size();
    cout<<"Ans - ";
    vector<int> ans= insertion_sort(arr,size);
    for(int i = 0; i < size; i++) {
        cout << ans[i] << " ";
    }
    return 0;
}
