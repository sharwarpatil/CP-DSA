#include<iostream>
using namespace std;

int getlen(char name[]){
    //length of string
    int i=0;
    while(name[i]!='\0'){
        i++;
    }
    int len=i;
    return len;
}
void rev(char name[],int len){
    //reverse a string
    int start =0 ;
    int end=len-1;
    while(start<end){
        swap(name[start++],name[end--]);
    }

}
bool checkpalindrome(char name[],int len){
    // check palindrome
    int start =0 ;
    int end=len-1;
    while(start<end){
        if(name[start]==name[end]){
            start++;
            end--;
        }else{
            return false;
        }
        return true;
    }

}
int main(){
    char name[20];
    cout<<"Enter the string : "<<endl;
    cin>>name;
     //length of string
    cout<<"The name is : "<<name<<endl;
    int length= getlen(name);
    cout<<"The length is : "<<length<<endl;



    //reverse a string
    rev(name,length);
    cout<<"The reversed is : "<<name<<endl;

    // check palindrome

    bool ispal = checkpalindrome(name,length);
    cout<<"Palindrome : "<<(ispal ? "Yes" : "No" )<<endl;
    return 0;



}




// check palindrome
