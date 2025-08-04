#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void fn(int a[],int i,int n)
{
    if(i>=n){
        return ;
    }
    for(int j=0;j<=i;j++){
        cout<<a[j]<<" ";
    }
    cout<<endl;
    fn(a,i+1,n);

}

int main()
{
    int n; cin>>n;
    int a[n]={3,1,4,2};
    fn (a,0,n);
    return 0;
}