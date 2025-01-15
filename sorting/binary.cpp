#include <iostream>
using namespace std;

int binary_search(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int middle=(start+end)/2;
    while(start<=end){
    if(arr[middle]==key){
        return middle;
    }else{
        if(key>arr[middle]){
        start=middle+1;

        }else{
             end=middle-1;
        }
        middle=(start+end)/2;

    }
    }
    return -1;

}

int main()
{
    std::cout<<"Ans -> ";
    int arr[10]={2,4,5,6,8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int ans = binary_search(arr,size,6);
    cout<<ans;



    return 0;
}
