

#include <iostream>
#include<map>
using namespace std;

int main()
{
    std::cout<<"Hello World"<<endl;
    map<int,string> m;
    m[1]="Hello";
    m[2]="Hi";
    m[3]="Hello";
    for(auto i : m){
        cout<<i.first<<endl;
    }
    for(auto i : m){
        cout<<i.second<<endl;
    }
    cout<<m.begin()->first<<endl;
    
    // // find
   cout<<"finding 3 -> "<<m.count(3)<<endl;
    
    // //delete
   cout<<"delete 3 -> "<<m.erase(3)<<endl;
    cout<<"After erasing -"<<endl;
    for(auto i : m){
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    return 0;
}