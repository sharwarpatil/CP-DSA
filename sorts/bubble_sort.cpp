#include<iostream>
#include <vector>
using namespace std;
vector<int> bubble_sort(vector<int>& v,int s)
{
    for(int i=1;i<s-1;i++){
        for(int j=0;j<s;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
            }

        }
        

    }
    return v;
}

int main(){
    vector<int> v{4,15,2,4,54};
    int size = v.size();
    cout<<size<<endl;

    vector<int> ans= bubble_sort(v,size);
    for(int i = 0; i < size; i++) {
        cout << ans[i] << " ";
    }
    return 0;
}
