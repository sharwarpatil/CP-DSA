#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
int main() {
    std::vector<int> numbers = {1,2,-1,-2,1,0,-1};
    std::unordered_map<int, int> counts;

    
    for (int num : numbers) {
        counts[num]++; 
    }
   
    int sum=0;
   for (auto i : counts) {
        if(i.first<0){
             sum+=0;
        }else{
             sum+=i.first;
        }
   
      
    }
      cout<<"sum - "<<sum;

    return 0;
}