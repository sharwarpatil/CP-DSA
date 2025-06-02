

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
    m.insert({2,"No"}); // 2 value will remain Hi only
    m[5]="5";
    for(auto i : m){
        cout<<i.first<<endl;
    }
    for(auto i : m){
        cout<<i.second<<endl;
    }
    cout<<m.begin()->first<<endl;
    
    // // find count of 3
   cout<<"finding 3 -> "<<m.count(3)<<endl;
    
    // //delete
   cout<<"delete 3 -> "<<m.erase(3)<<endl;
    cout<<"After erasing -"<<endl;
    for(auto i : m){
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    auto it=m.find(2);
    for(auto i=it;i!=m.end();i++){
        cout<<"2 and its value - "<<(*i).first<<" "<<i->second<<endl;  //i->second or (*i).first
    }
    return 0;
}