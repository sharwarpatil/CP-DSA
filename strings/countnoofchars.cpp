#include<iostream>
#include<unordered_map>
using namespace std;
class Solution{
    public:
    void noofchar(string a){
        unordered_map<char,int> count;
        for(char c : a){
            count[c]++;
        }   
        for(auto &entry: count){//d to iterate over the elements of a container (like an unordered_map) without copying the elements
        //entry refers to each element in the map
            cout<<entry.first<<" = "<<entry.second<<endl;
        }
    }
};
int main(){
    Solution A;
    string s;
    s="abaabcbc";
    A.noofchar(s);

}