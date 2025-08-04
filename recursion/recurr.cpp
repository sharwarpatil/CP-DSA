#include<iostream>
using namespace std;

void f(){
    cout<<"hello - "<<endl;
    f();
 
}
int main(){
    f();
    return 0;
}

