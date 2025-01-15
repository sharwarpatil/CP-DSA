

#include <iostream>
#include<set>
using namespace std;

int main()
{
    std::cout<<"Hello World"<<endl;
    set<int> s;
    s.insert(4);
    s.insert(2);
    s.insert(4);
    s.insert(7);
    for(auto i : s){
        cout<<i<<endl;
    }
    
    // find
    set<int>::iterator it =s.find(4);
    cout<<"Found- "<<*it<<endl;
    
    //delete
    set<int>::iterator itt=s.begin();
    advance(itt, 2);// itt=itt+2;
    
    s.erase(itt);
    cout<<"After earsing- "<<endl;
    for(auto i : s){
        cout<<i<<endl;
    }
    return 0;
}