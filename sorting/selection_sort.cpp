#include<iostream>
#include <vector>
using namespace std;
vector<int> selection_sort(vector<int>& v,int s)
{
    for(int i=0;i<s-1;i++){
        int minIndex=i;
        for(int j=i+1;j<s;j++){
            if(v[minIndex]>v[j]){
                minIndex=j;
            }

        }
        swap(v[i],v[minIndex]);

    }
    return v;
}

int main(){
    vector<int> v{4,15,2,4,54};
    int size = v.size();
    cout<<size<<endl;

    vector<int> ans= selection_sort(v,size);
    for(int i = 0; i < size; i++) {
        cout << ans[i] << " ";
    }
    return 0;
}
