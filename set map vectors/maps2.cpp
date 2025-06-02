

#include <iostream>
#include<map>
using namespace std;

int main()
{
    std::cout<<"Hello World"<<endl;
    map<int,int> m;
    map<pair<int ,int>,int> m2;
    m[1]=2;
    m[2]=4;
    m[3]=4;
    m2[{1,4}]=10;
    m2[{2,5}]=11;

    for(auto i : m){
        cout<<i.first<<" - "<<i.second<<endl;
    }

   for(auto i : m2){
    cout << "(" << i.first.first << ", " << i.first.second << ") - " << i.second << endl;
    }
    
    cout<<m.begin()->first<<endl;
    auto it = m.find(2);
    cout<<(it)->second<<endl;
   
   
    return 0;
}