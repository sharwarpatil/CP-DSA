#include<iostream>
#include<string>
using namespace std;

string removeOccurrences(string s, string part) {
       while(s.length()!=0 && s.find(part)<s.length()){
        s.erase(s.find(part),part.length());
       }     
        return s;
    }

int main(){
  
    string name;
    cout<<"Enter the string : "<<endl;
    getline(cin,name);

    cout<<"The string is : "<<name<<endl;
  

    string part;
    cout<<"Enter the string to be removed : "<<endl;
    getline(cin,part);

   
    
    

    name = removeOccurrences(name,part);
    cout<<"The new string is : "<<name<<endl;




    return 0;



}
