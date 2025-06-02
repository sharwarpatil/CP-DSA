#include<iostream>
using namespace std;
int main(){
    char x=4,y=5;
    cout<<"bitwise and (x&y) - "<<(x&y)<<endl;
    cout<<"bitwise or (x|y) - "<<(x|y)<<endl;
    cout<<"bitwise (x^y) - "<<(x&y)<<endl;
    cout<<"bitwise not (~x) - "<<(~x)<<endl;
    cout<<"left shift y<<1 - "<<(y<<1)<<endl; //0101 -> 1010
    cout<<"right shift y<<1 - "<<(y>>1)<<endl; // 0101 ->0010

    // Using bitwise operators to set, clear, and toggle bits
    //numbering 1010(3210)
    int num =5; // 0101
    //set the 2 nd bit to 1 
    num = num | (1<<2);
    cout << "After setting the second bit - "<<num<<endl; // 0101 | 0100 -> 0111  

    //  clearing the second bit
    num=num & ~(1<<2);
    cout << "After clearing the second bit - "<<num<<endl; // 0101 -> 0111 

    //Toggling a bit using XOR: 1-> 0 0->1
    num=num ^ (1<<1);
    cout<<"After toggling the 1st bit - "<<num<<endl;
}