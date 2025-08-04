#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int fn(int x)
{
    if(x<=1){
        return x;
    }
    int last = fn(x-1);
    int slast = fn(x-2);
     return last+slast;
    // return fn(x-1)+fn(x-2);
    
}

int main()
{
    int n; cin>>n;
    cout<<fn (n);
    return 0;
}