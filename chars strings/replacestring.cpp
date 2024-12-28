#include<iostream>
#include<string>
using namespace std;

string replacestr(string &name){
    string temp = "";
    for(int i =0; i<name.length();i++){
        if(name[i] ==' '){
            // temp.push_back('@');
            // temp.push_back('1');
            // temp.push_back('2');
            // or
            temp += "@123";
        }else{
            temp.push_back(name[i]);
        }


    }
     return temp;
}

int main(){
    //replace space(" ") with @123
    string name;
    cout<<"Enter the string : "<<endl;
    getline(cin,name);

    cout<<"The string is : "<<name<<endl;

    name = replacestr(name);
    cout<<"The new string is : "<<name<<endl;




    return 0;



}
