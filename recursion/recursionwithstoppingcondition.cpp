#include<iostream>
using namespace std;
int count=0;
void f(){
    if(count==3) return ;
    else 
        cout<<"count - "<<count<<endl;
        count++;
        f();
 
}
int main(){
    f();
    return 0;
}

